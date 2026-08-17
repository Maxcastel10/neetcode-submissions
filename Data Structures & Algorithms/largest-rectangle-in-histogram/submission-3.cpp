class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> edges;
        heights.push_back(0);
        int high =0;
        int c=0;
        for(int i=0;i<heights.size();i++){
            if(!edges.empty() && edges.top().second>heights[i]){
                while( !edges.empty() && edges.top().second>heights[i]){
                    high=max(high,(i-edges.top().first)*edges.top().second);
                    c=edges.top().first;
                    edges.pop();
                    // cout<<c<<"/";
                }
                edges.push({c,heights[i]});
                // cout<<c<<"-";
            }
            else{
                edges.push({i,heights[i]});
                // cout<<i<<"-";
            }
            // cout<<",";
        }
        return high;
    }
};
