class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int Allxor=0;
        for(int i=0;i<=n;i++){
            Allxor=Allxor^i;
        }
        for(int num:nums){
            Allxor=Allxor^num;
        }
        return Allxor;
    }
};