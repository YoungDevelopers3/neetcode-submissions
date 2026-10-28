class StockSpanner {
    stack<pair<int,int>>st;
    int index=0;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        while(!st.empty() && st.top().first<=price){
            st.pop();
        }

        int prevHigh=st.empty()?-1:st.top().second;
        int span=index-prevHigh;
        st.push({price,index});
        index++;
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */