class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int output = nums.size();

        for(int i = 0; i < nums.size(); ++i)
        {

            if(nums[i] == target)
            {
                output = i;
                break;
            }
            else if(nums[i] > target)
            {
                output = i - 2;
            }
            
        }
        
        return output;

    }
};
