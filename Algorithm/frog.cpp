///* 一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶。求该青蛙跳上一个 10 级的台阶总共有多少种跳法。 */
/////*
////ID: pengyon1
////TASK: ride
////LANG: C++
////*/
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <map>
//#include <cassert>
//#include <vector>
//#include <algorithm>
//using namespace std;
//std::map<int, int> cache;
////O(n)
//int numWays(int n)
//{
//    if(n==0){
//        return 1;
//    }
//    if(n<=2){
//        return n;
//    }
//    if(cache.find(n)!=cache.end()){
//        return cache[n];
//    }
//    else{
//        cache.insert(std::pair<int, int>(n, (numWays(n-1)+numWays(n-2))));
//        return cache[n];
//    }
//}
////O(1)
//int numWaysDP(int n)
//{
//    if (n<= 1) {
//                return 1;
//            }
//            if (n == 2) {
//                return 2;
//            }
//            int a = 1;
//                    int b = 2;
//                    int temp = 0;
//                    for (int i = 3; i <= n; i++) {
//                        temp = (a + b);
//                        a = b;
//                        b = temp;
//                    }
//                    return temp;
//}

//int maximumUnits(std::vector<std::vector<int>>& boxTypes, int truckSize)
//{
//    std::sort(boxTypes.begin(), boxTypes.end(), [](const std::vector<int> &a, std::vector<int> &b){
//        return a[1]>b[1];
//    });
//    int res = 0;
//    int loaded = 0;
//    std::vector<int> currentIter;
//     for(auto &iter: boxTypes)
//    {
//        if((truckSize>loaded)&&(truckSize<loaded+iter[0]))
//        {
//            res +=  (truckSize-loaded) * iter[1];
//            loaded += (truckSize-loaded) ;
//            break;
//        }
//        if(truckSize<iter[0])
//        {
//            res += truckSize * iter[1];
//            break;
//        }
//        if(loaded<truckSize)
//        {
//            res += iter[0]*iter[1];
//        }
//        loaded += iter[0];
//    }

//    return res;
//}
//void fuc(std::string str){
//    std::cout<<str<<std::endl;
//}

//std::vector<std::string> generateParenthesis(int n)
//{
//    if(n==0)return {""};
//    if(n==1)return{"()"};
//  std::vector<std::vector<std::string>> dp(n+1);

//        dp[0] = {""};
//        dp[1] = {"()"};

//    for(int i = 2; i<n+1; i++)
//    {
//        for(int j = 0; j<i; j++)
//        {
//            for(std::string p : dp[j])
//            {
//                for(std::string q :dp[i-1-j])
//                {
//                    std::string str = "(" + p + ")"+q;
//                    dp[i].push_back(str);
//                }
//            }
//        }
//    }
//    std::for_each(dp[n].begin(), dp[n].end(), fuc);
//    return dp[n];
//}

//int MaxVector(vector<int> v){
//    vector<int>::iterator maxPosition= max_element(v.begin(), v.end());
//    return *maxPosition;
//}

//int lengthOfLIS(vector<int>& nums)
//{
//    if(nums.size()==0)return 0;
//    vector<int> dp;
//    int maxans = 0;
//    for(int i=0; i<nums.size(); i++)
//    {
//        dp.push_back(1);
//        for(int j =0; j<i; j++)
//        {
//            if(nums[j]<nums[i])
//            {
//                dp[i] = max(dp[i], dp[j]+1);
//            }
//        }
//       maxans = max(dp[i], maxans);
//    }

//    return MaxVector(dp);
//}



//int main()
//{
////    std::vector<std::vector<int>> data;
////    std::vector<int> v1;
////    v1.push_back(5);
////    v1.push_back(10);
////    std::vector<int> v2;
////    v2.push_back(2);
////    v2.push_back(5);
////    std::vector<int> v3;
////    v3.push_back(4);
////    v3.push_back(7);
////    std::vector<int> v4;
////    v4.push_back(3);
////    v4.push_back(9);
////    //data.push_back(std::vector(2 , 2));
////    data.push_back(v1);
////    data.push_back(v2);
////    data.push_back(v3);
////    data.push_back(v4);
//////    data.insert(data.begin(), v1);
//////    data.insert(data.end(), v2);

////    std::cout<<maximumUnits(data, 10)<<std::endl;
//    //generateParenthesis(3);
//    vector<int > v;
//    v.push_back(10);
//    v.push_back(9);
//    v.push_back(2);
//    v.push_back(5);
//    v.push_back(3);
//    v.push_back(7);
//    v.push_back(101);
//    v.push_back(18);

//    printf(to_string(lengthOfLIS(v)).c_str());
//}
