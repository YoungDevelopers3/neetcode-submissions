class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n =position.size();
        int fleet=1;
        
        vector<pair<int,double>>temp(n,{0,0.0});
        for(int i=0;i<n;i++){
            double time=0;
            time=(double)(target-position[i])/speed[i];
            temp[i]={position[i],time};
            
        }
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        int i=1;
        double current=temp[0].second;
        while(i<n){
            
            if(current>=temp[i].second){
                 i++;
            }
            else{
                current=temp[i].second;
                fleet++;
                i++;
            }
           
        }
        return fleet;
    }
};
