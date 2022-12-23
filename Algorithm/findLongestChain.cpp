#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<string.h>

using namespace std;


int BinarySearch(vector<int> dp, int target)
 {
    int low=0, high = dp.size()-1;
    while (low<=high)
    {
        int mid = (low+high)>>1;
        if(dp[mid]<target)
        {
            low = mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }
    return low;
    
 }

int findLongestChain(vector<vector<int>>& pairs)
 {
    if (pairs.size()==0)
    {
        return 0;
    }

    sort(pairs.begin(), pairs.end());

    int n = pairs.size();
    vector<int> dp;
    for (int i = 0; i < n; i++)
    {
        int x = pairs[i][0], y=pairs[i][1];
        if(dp.size()==0||dp[dp.size()-1]<x)
        {
            dp.push_back(y);
        }
        else
        {
            int index= BinarySearch(dp, x);
            dp[index] = min(dp[index], y);
            // int low = lower_bound(dp.begin(),dp.end(), x) - dp.begin();
            // dp[low] = min(y,dp[low]);
        }
        
    }
    
   return dp.size();
 }

 

// int main()
// {
//    vector<vector<int>> data;
//    vector<int> v1;
//    vector<int> v2;
//    vector<int> v3;
//    v1.push_back(1);
//    v1.push_back(2);
//    v2.push_back(2);
//    v2.push_back(3);
//    v3.push_back(3);
//    v3.push_back(4);
////    v1.push_back(1);
////    v1.push_back(2);
////    v2.push_back(7);
////    v2.push_back(8);
////    v3.push_back(4);
////    v3.push_back(5);
//    data.push_back(v1);
//    data.push_back(v2);
//    data.push_back(v3);

//    findLongestChain(data);
// }
