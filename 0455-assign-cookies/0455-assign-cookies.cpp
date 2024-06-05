class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;
        int m=g.size();
        int n=s.size();
        int l=0, r=0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while(l<m && r<n){
            if(g[l]<=s[r]){
                ans++;
                l++;
            }
            r++;
        }
        return ans;
    }
};