class Solution {
public:
    int countSubarrays(vector<int>& nums,int maxSum){
        int count = 1;
        int sum = 0;

        for(int x : nums){
            if(sum+x <= maxSum){
                sum += x;
            }else{
                count++;
                sum = x;
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());

        int high = 0;
        for(int x : nums)
            high += x;

        while(low < high){
            int mid = low+(high-low)/2;
            if(countSubarrays(nums,mid) <= k)
                high = mid;
            else
                low = mid+1;
        }
        return low;
    }
};