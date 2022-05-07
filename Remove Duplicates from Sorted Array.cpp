class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
//         //method 1
//         if(nums.size()==0)return 0;
        
//         int i,n=nums.size(),k=0;
//         for(i=1;i<n;i++)
//         {
//             if(nums[i]!=nums[k])
//             {
//                 nums[k+1]=nums[i];k++;
//             }
//         }
//         return k+1;
        
        //method 2
        int i,n=nums.size(),k=0;
        for(i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1])
            {
                nums[k++]=nums[i-1];
            }
        }
        nums[k++]=nums[n-1];
        return k;
    }
};
