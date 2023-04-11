class Solution {
public:
  //method 1
    string removeStars(string s) {
        string ans = "";
        for(int i=0;i<s.length();i++){
            if(s[i]!='*') ans+=s[i];
            else ans.pop_back();
        }
        return ans;
    }
  //method2
    string removeStars(string s) {
        int j=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!='*') s[j++]=s[i];
            else j--;
        }
        return s.substr(0,j);
    }

};
