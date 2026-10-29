class Solution {
public:
    pair<int,int> minIndex(vector<int>& v){
        int min=INT_MAX;
        for(int i=0;i<v.size();i++){
            if(v[i]<min){
                min=v[i];
            }
        }
        for(int j=0;j<v.size();j++){
            if(v[j]==min){
                return {min,j};
            }
        }
        return {INT_MAX,-1};
    }
    vector<int> numberGame(vector<int>& nums) {
        vector<int>arr;
        int alice,bob;
        while(nums.size()!=0){
          auto result= minIndex(nums);
          alice=result.first;
          nums.erase(nums.begin()+result.second);
          auto res= minIndex(nums);
          bob=res.first;
          nums.erase(nums.begin()+ res.second);
          arr.push_back(bob);
          arr.push_back(alice);
          
            
        }
        return arr;

    }
};