class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,float>> l;
        vector<pair<int,float>> r;
        vector<float> time(position.size(),0.0);
        int ans=0;
        for(int i=0;i<position.size();i++){
            time[i]=((float)target-(float)position[i])/(float)speed[i];
        }
        for(float x : time){
            cout << x << ",";
        }
        for(int i=0;i<position.size();i++){
            if(time[i]>0){
                l.push_back({position[i],time[i]});
            }else if(time[i]<0){
                r.push_back({position[i],abs(time[i])});
            }else{
                ans++;
            }
        }
        sort(r.begin(),r.end());
        sort(l.begin(),l.end(), greater<pair<int,float>>());
        float max = 0;
        for(auto x : l){
            if(max < x.second){
                max = x . second;
                ans++;
            }
        }
        max = 0;
        for(auto x : r){
            if(max < x.second){
                max = x.second;
                ans++;
            }
        }
        return ans;
    }
};
