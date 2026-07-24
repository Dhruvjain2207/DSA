class Solution {
public:
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
    void sortColors(vector<int>& nums) {
     int* low=&nums[0];
     int* mid=&nums[0];
     int* high=&nums[nums.size()-1];
     while(mid<=high){
        if(*mid==0){
            swap(mid,low);
            mid++;
            low++;
        }
        else if(*mid==2){
            swap(mid,high);
            high--;
        }
        else mid++;
     }
    }
};