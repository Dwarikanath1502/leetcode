class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       deque<int> dq;
       vector<int> ans;

        int size = nums.size();

        for(int i = 0; i < size; i++){
            // remove out of bound
            if(!dq.empty() && dq.front()== i - k){
                dq.pop_front();
            }
        //remove all smaller element
        while(!dq.empty() && nums[dq.back()] <= nums[i]){
            dq.pop_back();
        }
        // push element
        dq.push_back(i);
            // if erached at kth element push the max to the ans
        if(i >= k-1){
            ans.push_back(nums[dq.front()]);
        }
        }
    return ans;
    }
};