class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      deque<int> dq;
      vector<int> ans;
      int size = nums.size();
  // storing the index of the element in the queue
    for(int i = 0; i < size; i++){
      // remove out of bound element
      if(!dq.empty() && dq.front() == i - k){
        dq.pop_front();
      }
      // remove smaller than numsp[i]
      while(!dq.empty() && nums[dq.back()] <= nums[i]){
        dq.pop_back();
      }
      // else push i
      dq.push_back(i);

      if(i >= k - 1 ){
        ans.push_back(nums[dq.front()]);
      }
    }
    return ans;
    }
};