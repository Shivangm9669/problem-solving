class Solution {
    // int hlpr(vector<int> & nums ,int  indx , vector<int> &help)
    // {
    //     if(indx<0)
    //     {
    //         return 0;
    //     }

    //     if(indx==0)
    //     {
    //         return nums[indx];
    //     }
    //     if(help[indx]!=-1)
    //     {
    //         return help[indx];
    //     }

    //     int pick = nums[indx]+hlpr(nums , indx-2 , help);
    //     int notPick = hlpr(nums , indx-1 , help);

    //     return help[indx]=max(pick , notPick);
    // }
public:
    int rob(vector<int>& nums) {

        int n= nums.size();

        // if(n==1)
        // {
        //     return nums[0];
        // }
        // vector<int> help (n , -1);
        
        int prev2 = 0;
        int prev = nums[0];
        int pick=0,notPick=0;
        
        for(int i =1 ; i<n ; i++)
        {
           if(i>=1)
           {
             pick=nums[i]+prev2;
           }
            notPick=prev;
            int curr=max(pick , notPick);
            prev2=prev;
            prev=curr;
        }

        return prev;

    }
};