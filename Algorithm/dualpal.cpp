// /* Use the slash-star style comments or the system won't see your
//   identification information */
// /*
// ID: pengyon1
// TASK: dualpal
// LANG: C++
// */
// #include <stdio.h>
// #include <iostream>
// #include <fstream>
// #include <string>
// #include <cassert>
// #include<stdlib.h>
// #include<vector>
// #include<map>
// #include<bits/stdc++.h>
// using namespace std;

// bool IsPalindromic(string str)
// {
//     int len = str.size();
//     if (len<2)
//     {
//         return true;
//     }
//     for (int i = 0; i < len/2; i++)
//     {
//         if(str[i]!=str[len-1-i])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// string Convert2NBase(int data, int n)
// {
//     char str[10005] = {0};
//     stack<int> st;
//     while (data!=0)
//     {
//         st.push(data%n);
//         data = data/n;
//     }
//     int i=0;
//     while (!st.empty())
//     {
//         int s = st.top();
//         if (s>=10)
//         {
//             str[i++] = s-10+'A';
//         }
//         else
//         {
//             str[i++] = s+'0';
//         }
//         st.pop();
//     }
    
//     return str;
// }

// void dualpal()
// {
//     //    freopen("D:\\QtProjects\\ConsoleTest\\dualpal.in","r",stdin);
//     //    freopen("D:\\QtProjects\\ConsoleTest\\dualpal.out", "w",stdout);
//     freopen("dualpal.in","r",stdin);
//     freopen("dualpal.out", "w",stdout);

//     string input;
//     //cin>>input;
//     int n, num;
//     vector<string> input1;
//     vector<string> output;
//     while (cin>>input)
//     {
//         input1.push_back(input);
//     }
    
//     n = atoi(input1[0].c_str());
//     num = atoi(input1[1].c_str());

//     while (output.size()<n)
//     {
//         num++;
//         int validCount=0;
//         for (int i = 2 ; i < 11; i++)
//         {
//             if(IsPalindromic(Convert2NBase(num,i)))
//             {
//                 validCount++;
//                 if(validCount>=2)
//                 {
//                     output.push_back(to_string(num));
//                     break;
//                 }
//             }
//         }
        
//     }
    
//     for (int i = 0; i < output.size(); i++)
//     {
//         cout<<output[i]<<endl;
//     }
    

// }

// int main()
// {
//     dualpal();
// }