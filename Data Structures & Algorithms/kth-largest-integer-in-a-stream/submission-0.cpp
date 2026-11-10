class KthLargest {
public:
priority_queue<int,vector<int>,greater<int>>pq;
int k=0;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        for(int i:nums){
            pq.push(i);
            if(k<pq.size()){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>k){
            pq.pop();
        }
        return pq.top();
    }
};
