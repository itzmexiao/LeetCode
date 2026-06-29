class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        int size = nums.size();
        if(size <= 1){
            return 1;
        }
        while(j < size){
            if(nums[i] != nums[j]){
                i++;
                int temp = nums[i];
                nums[i]=nums[j];
                nums[j]=temp;

                // <!-- Can be also done with directly 
                //    changing value instead of replacing value -->
                // nums[i]=nums[j]; 
            }
            j++;
        }
        
        return i+1;
    }
};