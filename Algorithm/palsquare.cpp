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

//bool huiwen(string s)//12321 ????????????????????????
//{
//	int n = s.length();
//	for(int i = 0; i <= n/2; ++i)
//	{
//		if(s[i] != s[n-i-1]) return false;
//	}
//	return true;
//}
 
 
//string ten_to_r(int n, int r)//???????????????n??????r??????
//{
//	char str[10005]={0};//??????????????????????????????????????????
//	stack<int> st;
//	while(n!=0)
//	{
//		st.push(n%r);
//		n = n/r;
//	}
//	int i = 0;
//	while(!st.empty())//?????????????????????
//	{
//		int s = st.top();
//		if(s >= 10)	str[i++] = s - 10 + 'A';// ??????10??????????????????????????????11->B 12->C
//		else str[i++] = s+'0';//??????10?????????????????????
//		st.pop();
//		//cout << str[i-1] <<" "<<i<<" ";
//	}
////	string ss = str;
//	return str;
//}
 
//string num_to_str(int n)//???????????????
//{
//	string res;
//	stringstream ss;
//	ss << n;//?????????n????????????res
//	ss >> res;//res = ss.str()
//	return res;
//}
 
//int str_to_num(string s)//???????????????
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
//		int y = i*i; //?????????????????????????????????i??????B???????????????????????????????????????????????????
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
