class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        unordered_map<int, int>ump;
        stack<int> stk;

        for(int i=nums2.size()-1;i>=0;i--){
            while(!stk.empty() && stk.top() < nums2[i])
                stk.pop();
            ump[nums2[i]] = stk.empty() ? -1 : stk.top();
            stk.push(nums2[i]);
        }
        for(auto& num : nums1)
            result.push_back(ump[num]);
        return result;
    }
};