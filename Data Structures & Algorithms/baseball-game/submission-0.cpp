class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans=0;
        vector<int>calc;
        int j=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                calc.pop_back();
            }
            else if(operations[i]=="D"){
                int b=calc.back();
                calc.push_back(2*b);
            }
            else if(operations[i]=="+"){
                int x=calc.back();
                int y=calc[calc.size()-2];
                calc.push_back(x+y);
            }
            else{
                int num=stoi(operations[i]);
                calc.push_back(num);
            }
        }
        ans=accumulate(calc.begin(),calc.end(),0);
        return ans;
    }
};