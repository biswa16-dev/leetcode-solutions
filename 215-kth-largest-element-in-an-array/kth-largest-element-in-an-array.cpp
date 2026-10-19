class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // Create a min-heap
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        for (int num : nums) {
            minHeap.push(num);
            
            // If heap size exceeds k, remove the smallest element
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
        
        // The top element is the kth largest
        return minHeap.top();
    }
};