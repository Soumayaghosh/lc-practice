class Solution {
public:
     int findrightMost(vector<int>& nums, int target,int n){
        int left=0,right=n-1;
        int right_most=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                right_most=mid;
                left=mid+1;
            }else if(nums[mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
         }
            return right_most;
        }
    int findleftMost(vector<int>& nums, int target,int n){
        int left=0,right=n-1;
        int left_most=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                left_most=mid;
                right=mid-1;
            }else if(nums[mid]<target){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return left_most;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int left_most= findleftMost(nums,target,n);
        int right_most=findrightMost(nums,target,n);
        return {left_most,right_most};
    }
};