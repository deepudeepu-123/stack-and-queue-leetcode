class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         vector<int> ans;
        deque<int> q; // Use deque instead of vector
        for(int i=0;i<nums.size();i++) {
            // Remove elements outside of the current window from the front of the deque
            while(!q.empty() && q.front() <= i-k) {
                q.pop_front();
            }
            // Remove elements smaller than the current element from the back of the deque
            while(!q.empty() && nums[q.back()] < nums[i]) {
                q.pop_back();
            }
            // Add the current index to the back of the deque
            q.push_back(i);
            // If the front index is within the window, add it to the answer
            if(i >= k-1) {
                ans.push_back(nums[q.front()]);
            }
        }
        return ans;
    }
    
};