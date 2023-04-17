class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        List<Boolean> ans = new ArrayList<Boolean>();
        int mx = candies[0];
        for(int i : candies){
            mx = Math.max(i,mx);
        } 
        for(int i: candies){
            ans.add(mx<=(i+extraCandies)? true:false);
        }
        return ans;
    }
}
