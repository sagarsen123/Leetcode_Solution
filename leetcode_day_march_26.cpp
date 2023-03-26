class Solution {
public:

    int result = -1;

    void dfs(int u,vector<int>& edges, vector<bool> &visited,vector<bool> &inRecursion,vector<int> &count){
        if(u!=-1){
            int v= edges[u];
            visited[u]=true;
            inRecursion[u]=true;

            if(v!=-1 && !visited[v]){
                count[v] = count[u] + 1;
                dfs(v,edges,visited,inRecursion,count);
            }else if(v!=-1 && inRecursion[v]){
                result = max(result , count[u] - count[v] + 1);
            }
            inRecursion[u] = false;
        }
    }

    int longestCycle(vector<int>& edges) {

        //no of nodes
        int n = edges.size();

        //store the visited for the nodes
        vector<bool> visited(n,false);

        //vector to check the current recursion stack
        vector<bool> inRecursion(n,false) ;

        //vector to store the curr Node Count
        vector<int> count(n,1);

        for(int i=0;i<n;i++){
            if(!visited[i]) dfs(i,edges,visited,inRecursion,count);
        }

        return result;       

    }
};