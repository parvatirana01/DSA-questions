class Solution {
public:
    int strStr(string hay, string nee) {
        int n=hay.size(), m=nee.size();
        for(int i=0;i<n;i++){
            if(hay[i]==nee[0]){
                int j=1;
                for(j=1;j<m;j++){
                    if(hay[i+j]!=nee[j])break;
                }
                    if(j==nee.size()) return i;
            }
        }
            return -1;
    }
};