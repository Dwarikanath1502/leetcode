class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      deque<int> dq;
      vector<int> ans;
      int size = nums.size();
// storing the index of the element in the queue
      for(int i = 0 ; i < size; i++){
        //   remove the index if it is getting out of bound
        if(!dq.empty() && dq.front() == i - k){
            dq.pop_front();
        }
        // remove the element smaller than nums[i]
        while(!dq.empty() && nums[dq.back()] <= nums[i]){
            dq.pop_back();
        }
        //push to queue
        dq.push_back(i);
        //push the element which is at first index in the deque

        if( i >= k- 1){
            ans.push_back(nums[dq.front()]);
        }
      }
    return ans;
    }
};