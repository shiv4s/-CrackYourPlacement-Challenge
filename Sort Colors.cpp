class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        
        //r,w,b
        //0,1,2
        
//         //method 1
//         int zero=0,one=0,two=0,i;
//         for(i=0;i<nums.size();i++)
//         {
//             if(nums[i]==0)zero++;
//             else if(nums[i]==1)one++;
//         }
//         two=nums.size()-zero-one;
        
//         for(i=0;i<nums.size();i++)
//         {
//             if(zero)
//             {
//                 nums[i]=0;zero--;
//             }
//             else if(one)
//             {
//                 nums[i]=1;one--;
//             }
//             else
//             {
//                 nums[i]=2;two--;
//             }
//         }
        
        //method 2
        int i=0,j=nums.size()-1;
        for(int it=0;it<nums.size();it++)
        {
            if(i>j||it>j)break;
            if(i==it&&nums[it]==0)i++;
            else if(nums[it]==0){swap(nums[i],nums[it]);i++;it--;}
            else if(j==it&&nums[it]==2)j--;
            else if(nums[it]==2){swap(nums[j],nums[it]);j--;it--;}
            
        }
        
        
//         //method 3
//         int i,x=-1,y=-1,n=(int)nums.size();
        
//         for(i=0;i<n;i++)
//         {
            
//             if(nums[i]==0)
//             {
//                 x++;y++;nums[i]=2;nums[y]=1;
//                 nums[x]=0;
                
//             }
//             else if(nums[i]==1)
//             {
//                 y++;nums[i]=2;nums[y]=1; 
//             }
            
          
//         }
        
        
    }
};
