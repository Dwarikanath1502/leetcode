class Solution {
public:
    bool check(vector<int>& nums) {
        int size = nums.size();

        int count= 0;

        for(int i = 1; i < size; i++){
            if(nums[i - 1] > nums[i]){
                count ++;
            }
        }
        if(nums[size - 1] > nums[0]){
            count++;
        }
        // if count is less or equal to 1 return true
        return count <= 1;

    }
};