class Solution {
private:

    // int helpr(vector<int>& help , vector<int> &nums , int i , int size)
    // {
    //     if(nums[i]==0 && i==size-1)
    //     {
    //         return 0;
    //     }
    //     if(nums[i]==0)
    //     {
    //         return INT_MIN;
    //     }
    //     if(i>=size-1)
    //     {
    //         cout<<"Loop reaches herre"<<endl;
    //         return 0;
    //     }
        
    //     if(help[i]!=-1)
    //     {
    //         return help[i];
    //     }
    //     int min = INT_MAX;
    //     // cout<<"nums-:"<<nums[i]<<endl;
    //     for(int j = 1; j+i<size && j<=nums[i] ; j++)
    //     {
    //             // cout<<"Befor i "<<i<<endl;
    //             int check = helpr(help , nums , i+j , size)+1;
    //             // cout<<"Check-:"<<check<<" i-:"<<i<<endl;
    //             if(min>check && check >0)
    //             {
    //                 min = check;
    //                 // cout<<"Min-:"<<min<<" i-:"<<i<<endl;
    //             }
    //     }
    //     if(min==INT_MAX)
    //     {
    //         min=INT_MIN;
    //     }
    
    //     return help[i]=min;
    // }
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> help (n , INT_MAX);
        help[n-1]=0;

        for(int i =n-2 ; i>=0 ; i--)
        {
            if(nums[i]==0)
            {
                help[i]=INT_MIN;
                continue;
            }

            for(int j =1 ; j+i<n && j<=nums[i] ; j++)
            {
                if(help[i+j]!=INT_MAX && help[i+j]!=INT_MIN)
                {
                    help[i]=min(help[i] , help[i+j]+1);
                }
            }
        }

        // helpr(help , nums , 0 , n);
        // // for (int i = 0 ; i< n ; i++)
        // // {
        // //     cout<<help[i]<<endl;
        // // }
        return help[0];
    }
};