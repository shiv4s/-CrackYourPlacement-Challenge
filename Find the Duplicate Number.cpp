class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        //n+1 elements <=1 <=n
        
        int fast=nums[nums[0]],slow=nums[0];
        
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
            
        }
        slow=0;
        while(slow!=fast)
        {
            slow=nums[slow];
            fast=nums[fast];
            
        }
        
        return slow;
        
        
    }
};
