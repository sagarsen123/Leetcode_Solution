class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int s = 0;
        int e = people.size()-1;
        int ans = 0;
        sort(people.begin(),people.end());

        while(s<=e){
            ans++;
            if(people[s] + people[e]  <= limit) s++;
            e--;
        }

        return ans;
    }
};
