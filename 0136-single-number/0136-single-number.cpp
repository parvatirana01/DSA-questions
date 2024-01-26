class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int num=0;
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(int i=0;i<n;i++){
        if(freq[nums[i]]==1)
            num=nums[i];
        }
        return num;
    }
};