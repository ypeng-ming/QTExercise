///* Use the slash-star style comments or the system won't see your
//   identification information */
///*
//ID: pengyon1
//TASK: beads
//LANG: C++
//*/
//#define MARK
//#include<cstdio>
//#include<iostream>
//#include<cstring>
//#include<cstdlib>
//#include<cmath>
//#include<algorithm>
//#include<string.h>

//using namespace std;
//const int maxn = 360;
//const int Maxn = 2*maxn;

//int n, _max;
//char str[Maxn], temp[maxn], s[Maxn+1];

//int bl[Maxn], rl[Maxn];
//int br[Maxn], rr[Maxn];

////int x()
////{
////#ifdef MARK
////    freopen("beads.in", "r", stdin);
////    freopen("beads.out", "w", stdout);
////#endif // MARK
////    while(~scanf("%d", &n))
////    {
////        scanf("%s", str);
////        strcpy(temp, str);
////        strcat(str, temp);
////        //为了方便后面的操作，我让字符串下标从1开始到2*n结束
////        strcpy(s+1, str);

////        //从左端开始，计算每一颗珠子从自身开始向左收集，最多能够收集到的数目
////        bl[0] = rl[0] = 0;//虚拟出来第0颗珠子，使得第一颗珠子能够按照标准统一处理
////        for(int i = 1; i <= 2*n; i++) {
////            if('b' == s[i]) {
////                bl[i] = bl[i-1] + 1;
////                rl[i] = 0;
////            } else if('r' == s[i]) {
////                rl[i] = rl[i-1] + 1;
////                bl[i] = 0;
////            } else {
////                bl[i] = bl[i-1] + 1;
////                rl[i] = rl[i-1] + 1;
////            }
////        }

////        //从右端开始，计算每一颗珠子从自身开始向右收集，最多能够收集到的数目
////        br[2*n+1] = rr[2*n+1] = 0;//虚拟出来第2*n+1颗珠子，使得最后一颗珠子能够按照标准统一处理
////        for(int i = 2*n; i >= 1; i--) {
////            if('b' == s[i]) {
////                br[i] = br[i+1] + 1;
////                rr[i] = 0;
////            } else if('r' == s[i]) {
////                rr[i] = rr[i+1] + 1;
////                br[i] = 0;
////            } else {
////                br[i] = br[i+1] + 1;
////                rr[i] = rr[i+1] + 1;
////            }
////        }
////        _max = 0;
////        for(int i = 1; i < 2*n; i++) {
////            _max = max(_max, max(bl[i], rl[i])+max(br[i+1], rr[i+1]));
////        }

////        //防止项链是由一种颜色组成的，这个时候有重复计算，会超过n
////        _max = min(_max, n);

////        printf("%d\n", _max);
////    }
////    return 0;
////}

//int main()
//{
//#ifdef MARK
//    freopen("beads.in","r", stdin);
//    freopen("beads.out","w", stdout);
//#endif

//    while(~scanf("%d", &n))//~表示输入取反，控制while循环
//    {
//        scanf("%s", str);
//        strcpy(temp, str);
//        strcat(str, temp);
//        strcpy(s+1,str);//是+整个数组大小的字节数
//        bl[0] = rl[0] = 0;
//        for(int i=1; i<n*2; i++)
//        {
//            if('b'==s[i])
//            {
//                bl[i] = bl[i-1]+1;
//                rl[i] = 0;
//            }
//            else if('r'==s[i])
//            {
//                rl[i] = rl[i-1] +1;
//                bl[i] = 0;
//            }
//            else
//            {
//                rl[i] = rl[i-1] +1;
//                bl[i] = bl[i-1]+1;
//            }
//        }
//        rr[2*n+1] = br[2*n+1]=0;
//        for(int i=2*n; i>0;i--)
//        {
//            if('b'==s[i])
//            {
//                br[i] = br[i+1]+1;
//                rr[i] = 0;
//            }
//            else if('r'==s[i])
//            {
//                rr[i] = rr[i+1] +1;
//                br[i] = 0;
//            }
//            else
//            {
//                rr[i] = rr[i+1] +1;
//                br[i] = br[i+1]+1;
//            }
//        }

//        _max  = 0;
//        for(int i =0; i<2*n; i++)
//        {
//            _max = max(_max, max(bl[i], rl[i])+ max(br[i+1], rr[i+1]));
//        }
//           //防止项链是由一种颜色组成的，这个时候有重复计算，会超过n
//       _max = min(_max, n);

//       printf("%d\n", _max);
//        }

//    return 0;
//    }

















