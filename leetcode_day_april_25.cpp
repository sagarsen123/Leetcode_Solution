class Solution {
public:
    void dfs(int node,unordered_map<int,vector<int>> &mp,vector<bool> &visited,int &s){
        visited[node]=true;
        s++;
        for(auto i : mp[node]){
            if(!visited[i]) dfs(i,mp,visited,s);
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> visited(n,0);
        int curr = n;
        long long ans = 0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                int s= 0;
                dfs(i,mp,visited,s);
                ans +=((long long)( curr -s) * s);
                curr-=s;
            }
        }
        return ans;
    }
};