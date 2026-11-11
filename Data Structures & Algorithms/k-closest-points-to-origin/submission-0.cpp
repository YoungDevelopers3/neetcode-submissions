class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>>pq;
        vector<vector<int>>ans;
        int n=points.size();

        for(int i=0;i<n;i++){
            int x=points[i][0];
            int y=points[i][1];
            int dist=x*x+y*y;
            pq.push({dist,i});
            if(pq.size()>k){
                pq.pop();
            }
        }

        while(!pq.empty()){
            int j=pq.top().second;
            int x=points[j][0];
            int y=points[j][1];
            ans.push_back({x,y});
            pq.pop();
        }
        return ans;
        
    }
};
