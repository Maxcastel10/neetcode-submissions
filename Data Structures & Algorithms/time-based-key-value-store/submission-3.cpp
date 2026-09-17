class TimeMap {
public:
    unordered_map<string,vector<pair<string,int>>> timemp;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        pair<string,int> tempp = {value,timestamp};
        timemp[key].push_back(tempp);

    }
    
    string get(string key, int timestamp) {
        // for(auto k : timemp[key]){
        //     if(k.second<=timestamp){
        //         return k.first;
        //     }
        // }
        if(timemp[key].empty()){
            return "";
        }
        int low = 0;
        int high = timemp[key].size()-1;
        int ans = -1;
        while(low<=high){
            int mid = low + (high - low) / 2;
            if(timemp[key][mid].second<=timestamp){
                ans = mid;
                low = mid + 1;
                
            }else{
                high = mid - 1;
            }
        }
        if(ans == -1){
            return "";
        }
        return timemp[key][ans].first;
    }
};
