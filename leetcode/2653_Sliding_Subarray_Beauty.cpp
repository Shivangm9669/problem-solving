class Solution
{
public:
    vector<int> getSubarrayBeauty(vector<int> &nums, int k, int x)
    {

        int i = 0;
        int j = 0;
        int n = nums.size();
        vector<int> res;
        vector<int> freq(51, 0);
        while (j < n)
        {
            if (j - i < k)
            {
                if (nums[j] < 0)
                {
                    freq[-1 * (nums[j])]++;
                }
                j++;
            }
            if (j - i == k)
            {
                int count = 0;
                int k;
                for (k = 50; k > 0; k--)
                {
                    if (freq[k] != 0)
                    {
                        count += freq[k];
                    }
                    if (count >= x)
                    {
                        break;
                    }
                }
                if (k != 0)
                {
                    res.push_back(-1 * k);
                }
                else
                {
                    res.push_back(0);
                }
                if (nums[i] < 0)
                {
                    freq[-1 * (nums[i])]--;
                }
                i++;
            }
        }

        return res;
    }
};
