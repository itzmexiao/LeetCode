class Solution {
public:
    int maxOR=0;
    int count=0;
    void solve(vector<int>& nums,int index, int currOR){
        if(index==nums.size()){
            if(currOR == maxOR)
                count++;
            return;
        }
        solve(nums,index+1,currOR | nums[index]);
        solve(nums,index+1,currOR);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        maxOR=0;
    for(int x : nums)
        maxOR |= x;
    solve(nums,0,0);
    return count;
    }
};