class TimeMap {
public:
    unordered_map<string,deque<pair<string,int>>> timemp;
    TimeMap() {
    }
    
    void set(string key, string value, int timestamp) {
        pair<string,int> tempp = {value,timestamp};
        timemp[key].push_front(tempp);
    }
    
    string get(string key, int timestamp) {
        for(auto k : timemp[key]){
            if(k.second<=timestamp){
                return k.first;
            }
        }
        return "";
    }
};
