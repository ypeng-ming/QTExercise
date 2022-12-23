/* Use the slash-star style comments or the system won't see your
  identification information */
/*
ID: pengyon1
TASK: palsquare
LANG: C++
*/
//#include <stdio.h>
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <cassert>
//#include<stdlib.h>
//#include<vector>
//#include<map>
//#include<bits/stdc++.h>
//using namespace std;

//bool IsPlalindromic(string str)
//{
//    int len = str.size();
//    if (len<2)
//    {
//        return true;
//    }
//    for (int i = 0; i < len/2; i++)
//    {
//        if(str[i]!=str[len-1-i])
//        {
//            return false;
//        }
//    }
//    return true;
    
//}

//string Convert2NBase(int n,int b)
//{
//    char str[10005]={0};
//	stack<int> st;
//	while (n!=0)
//	{
//		st.push(n%b);
//		n=n/b;
//	}
//	int i=0;
//	while (!st.empty())
//	{
//		int s = st.top();
//		if (s>=10)
//		{
//			str[i++] = s-10+'A';
//		}
//		else
//		{
//			str[i++] = s+'0';
//		}
//		st.pop();
//	}
	
//    return str;
//}

//void PlalindromicSquare()
//{
////    freopen("D:\\QtProjects\\ConsoleTest\\palsquare.in","r",stdin);//D:\\QtProjects\\ConsoleTest\\
////    freopen("D:\\QtProjects\\ConsoleTest\\palsquare.out", "w",stdout);//D:\\QtProjects\\ConsoleTest\\
//    freopen("palsquare.in","r",stdin);//D:\\QtProjects\\ConsoleTest\\
//    freopen("palsquare.out", "w",stdout);//D:\\QtProjects\\ConsoleTest\\

//    string base;
//    cin>>base;
//    int n = atoi(base.c_str());
//    map<int, int> source;
//    vector<pair<int,string>> result;
//    for (int i = 1; i <= 300; i++)
//    {
//        source[i] = i*i;
//    }
//    for (auto iter = source.begin(); iter!=source.end(); iter++)
//    {
//        string temp = Convert2NBase(iter->second, n);
//        if (IsPlalindromic(temp))
//        {
//            result.push_back(make_pair(iter->first, temp));
//        }
        
//    }
    
//    for (auto iter = result.begin(); iter!=result.end(); iter++)
//    {
//        cout<<iter->first<<" "<<iter->second<<endl;
        
//    }
    
//}

//// int main(void)
//// {
////     PlalindromicSquare();
//// }

//bool huiwen(string s)//12321 判断是否为回文数
//{
//	int n = s.length();
//	for(int i = 0; i <= n/2; ++i)
//	{
//		if(s[i] != s[n-i-1]) return false;
//	}
//	return true;
//}
 
 
//string ten_to_r(int n, int r)//将十进制的n转为r进制
//{
//	char str[10005]={0};//记得要初始化，否则结果是错的
//	stack<int> st;
//	while(n!=0)
//	{
//		st.push(n%r);
//		n = n/r;
//	}
//	int i = 0;
//	while(!st.empty())//将数字转成字符
//	{
//		int s = st.top();
//		if(s >= 10)	str[i++] = s - 10 + 'A';// 大于10的数字转成字符，比如11->B 12->C
//		else str[i++] = s+'0';//小于10的数字转成字符
//		st.pop();
//		//cout << str[i-1] <<" "<<i<<" ";
//	}
////	string ss = str;
//	return str;
//}
 
//string num_to_str(int n)//数字转字符
//{
//	string res;
//	stringstream ss;
//	ss << n;//将数字n转成字符res
//	ss >> res;//res = ss.str()
//	return res;
//}
 
//int str_to_num(string s)//字符转数字
//{
//	int res;
//	stringstream ss;
//	ss << s;
//	ss >> res;
//	return res;
//}
 
//int main()
//{
//	freopen("palsquare.in","r",stdin);
//	freopen("palsquare.out","w",stdout);
//	int B;
//	cin >> B;
//	for(int i = 1; i <= 300; ++i)
//	{
//		int y = i*i; //先进行平方计算，不可将i转成B进制后，再用转成进制后的值平方计算
//		string B1 = ten_to_r(i,B);
//		//cout << B1 << endl;
//		string B2 = ten_to_r(y,B);
//		if(huiwen(B2))
//		{
//			cout << B1 << " " << B2 << endl;
//		}
//	}
//	return 0;
//}
