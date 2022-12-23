#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<string.h>

using namespace std;


int lengthOfLIS(vector<int>& nums)
{
    if(nums.size()==0)return 0;
    int len = 1;
    int n = nums.size();
    vector<int> dp(n+1);
    dp[len] = nums[0];
    for(int i=1; i<n;i++)
    {
        if(nums[i]>dp[len])
        {
            dp[++len] = nums[i];
        }
        else
        {
            // vector<int>::iterator low = lower_bound(dp.begin(), dp.end(), nums[i]);
            // if (low!=dp.end())
            // {
            //     *low = nums[i];
            // }
            

            int l=1, r=len, pos=0;// 如果找不到说明所有的数都比 nums[i] 大，此时要更新 d[1]，所以这里将 pos 设为 0
            while(l<=r)
            {
                int mid = (l+r)>>1;
                if(dp[mid]<nums[i])
                {
                    pos=mid;
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
                
            }
            dp[pos+1] = nums[i];
        }
        
    }
    return len;
}