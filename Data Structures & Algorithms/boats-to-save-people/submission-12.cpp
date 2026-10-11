class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        int ans=0;
        int sum=0;
        int i=0;
        int j=people.size()-1;
        
        sort(people.begin(),people.end());
        while(i<j){
            sum=people[i]+people[j];
            if(sum<=limit){
                sum=0;
                ans++;
                i++;
                j--;
               
                
            }
            else if(sum>limit){
                sum=0;
                j--;
                ans++;
            }
        }
        if(i==j){
            ans++;
        }
        
        return ans;
    }
};