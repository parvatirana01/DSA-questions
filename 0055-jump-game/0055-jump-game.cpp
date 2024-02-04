class Solution {
public:
    bool canJump(vector<int>& nums) {   
        int n=nums.size();
        int right=nums[0];
        for(int i=0;i<=right;i++){
            if(right>=n-1) return true;
            right=max(right,i+nums[i]);
        }
        return false;
    }
};