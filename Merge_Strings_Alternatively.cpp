//M1 
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        int one = word1.length();
        int two = word2.length();
        string ans = "";
        while(i<one || j<two){
            if(i<one) ans += word1[i++];
            if(j<two) ans += word2[j++];
        }
        return ans;
    }
};

//M2

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        int one = word1.length();
        int two = word2.length();
        string ans ;
        while(i<one || j<two){
            if(i<one) ans.push_back(word1[i++]);
            if(j<two) ans.push_back(word2[j++]);
        }
        return ans;
    }
};
