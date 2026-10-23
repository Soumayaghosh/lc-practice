class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int n=nums.size();
      int gola_indx=-1;
      for(int i=n-1;i>0;i--){
        if(nums[i-1]<nums[i]){
            gola_indx=i-1;
            break;
        }
      } 
      if(gola_indx!=-1){
      int swap_indx=gola_indx;
      for(int j=n-1;j>=gola_indx+1;j--){
        if(nums[j]>nums[gola_indx]){
            swap_indx=j;
            break;
        }
      }
      swap(nums[gola_indx],nums[swap_indx]);
      }
      reverse(nums.begin()+gola_indx+1,nums.end()); 
    }
};