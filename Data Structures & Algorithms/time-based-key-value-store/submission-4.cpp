class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>store;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        store[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
         if(store.find(key)==store.end()){
            return "";
         }

         auto& entries=store[key];

         int low=0;
         int high=entries.size()-1;

         while(low<=high){
            int mid=low+(high-low)/2;
            if(entries[mid].first<=timestamp){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
         }

         if(low==0){
            return "";
         }
         return entries[low-1].second;





    }
};
