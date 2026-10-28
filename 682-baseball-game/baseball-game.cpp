class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>v;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                v.pop_back();

            }
            else if(operations[i]=="D"){
                v.push_back(2*v[v.size()-1]);
            }
            else if(operations[i]=="+"){
                v.push_back(v[v.size()-1]+v[v.size()-2]);
            }
            else{
                v.push_back(stoi(operations[i]));
            }
        }
        int sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        return sum;
      

        
    }
};