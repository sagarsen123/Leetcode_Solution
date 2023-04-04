class Solution {
public:
    int partitionString(string s) {
        vector<int> countL(26,-1);
        int c = 0;
        int sofSubstring = 0;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            if(countL[ch - 'a']>=sofSubstring) {
                c++;
                sofSubstring = i;
            }
            countL[ch-'a']= i;
        }
         return c + 1;
    }
};
