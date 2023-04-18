
//MEthod1
class Solution {
    public String mergeAlternately(String word1, String word2) {
        String ans ="";
        int i=0,j=0;
        while(i<word1.length() || j<word2.length()){
            if(i<word1.length()) ans+=word1.charAt(i++);
            if(j<word2.length()) ans+=word2.charAt(j++);
        }
        return ans;
    }
}

//Method2
class Solution {
    public String mergeAlternately(String word1, String word2) {
        int n=word1.length();
        int m= word2.length();

        int i=0,j=0;
        StringBuilder ans = new StringBuilder();

        while(i<n || j<m){
            if(i<n) ans.append(word1.charAt(i++));
            if(j<m) ans.append(word2.charAt(j++));
        }

        return ans.toString();
    }
}
