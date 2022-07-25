class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstIndex = -1, lastIndex = -1;
        
        int start = 0 , end = nums.size()-1;
        
        while(start <= end) {
            int mid = start + (end - start)/2;
            
            if(nums[mid] == target) {
                firstIndex = mid;
                end = mid - 1;
            }else if(nums[mid] > target)
                end = mid - 1;
            else start = mid + 1;
        }
        
        start = 0;
        end = nums.size()-1;
        
        while(start <= end) {
            int mid = start + (end - start)/2;
            
            if(nums[mid] == target) {
                lastIndex = mid;
                start = mid + 1;
            }else if(nums[mid] > target)
                end = mid - 1;
            else start = mid + 1;
        }
        
        
        return {firstIndex,lastIndex};
    }
};