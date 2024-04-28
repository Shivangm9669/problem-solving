class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int max = INT_MIN;
        int n=nums.size();
        if(n<2)
        {
            return nums[0];
        }

        for(int j=0 ; j<=1 ; j++)
        {

            int pick=0 , notPick=0;
            int prev=nums[j];
            int prev2=0;
            for(int i =1+j ; i<n-1+j ; i++)
            {
               if(i>=1)
               {
                 pick=nums[i]+prev2;
               }
                notPick=prev;
                int curr= std::max(pick , notPick);
                prev2=prev;
                prev=curr;
            }
                if(max<prev)
                {
                    max=prev;
                }
            }
        return max;
    }
};