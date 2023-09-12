class Solution {
public:
    int jump(vector<int>& nums) {
        int size = nums.size();
        if(size == 0){
            return 0;
        }
        for(int i = 1; i < size; i++){
            nums[i] = max(nums[i] + i, nums[i - 1]);
        }

        int i =0;
        int maxJump = 0;

        while(i < size - 1){
            maxJump++;
            i = nums[i];
        }
        return maxJump;
    }
};