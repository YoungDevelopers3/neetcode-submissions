class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        vector<int>freq(26,0);
        for(char i:tasks){
            freq[i-'A']++;
        }
        int f=*max_element(freq.begin(),freq.end());
        int k=0;
        for(int i:freq){
            if(i==f){
              k++;
            }
        }

        int ans=max((int)tasks.size(),((f-1)*(n+1)+k));
        return ans;
           




    }
};
