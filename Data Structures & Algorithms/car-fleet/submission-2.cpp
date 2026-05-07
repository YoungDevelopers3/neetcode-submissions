class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        int n=position.size();
        vector<pair<int,double>>time(n);
        for(int i=0;i<n;i++){
            time[i]={position[i],(double)(target-position[i])/speed[i]};
        }
        sort(time.begin(),time.end());
        reverse(time.begin(),time.end());
        int count=0;
        double maxTime=0;
        for(int i=0;i<n;i++){
            if(time[i].second>maxTime){
                count++;
                maxTime=time[i].second;
            }
            
        }
        return count;
    }
};
