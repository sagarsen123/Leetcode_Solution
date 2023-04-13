//JAVA
class Solution {
    public boolean validateStackSequences(int[] pushed, int[] popped) {
        Stack<Integer> st = new Stack<Integer>();
        int j=0;
        for(int i=0;i<pushed.length;i++){
            st.push(pushed[i]);
            while(!st.empty() && popped[j]==st.peek()){
                st.pop();
                j++;
            }
        }
        return st.empty();
    }
}

//CPP
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int i=0;
        int j=0;
        while(i<pushed.size() && j<popped.size()){
             st.push(pushed[i++]);
                while(!st.empty() && popped[j]==st.top()) st.pop(),j++;
        }
        return st.empty();
    }
};
