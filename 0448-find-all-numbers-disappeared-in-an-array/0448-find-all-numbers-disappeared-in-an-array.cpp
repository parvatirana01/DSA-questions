class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        unordered_map<int,bool>mapp;
        for(int i=0;i<n;i++)
            mapp[nums[i]]=true;
        for(int i=1;i<=n;i++){
            if(mapp.find(i)==mapp.end())
                ans.push_back(i);
        }
        return ans;
    }
};