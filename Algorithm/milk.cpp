/* Use the slash-star style comments or the system won't see your
  identification information */
/*
ID: pengyon1
TASK: milk
LANG: C++
*/
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
#include<stdlib.h>
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
vector<int> price;
vector<int> quantity;
vector<pair<int,int>> pq;
void getData()
{
//    freopen("D:\\QtProjects\\ConsoleTest\\milk.in","r",stdin);
//    freopen("D:\\QtProjects\\ConsoleTest\\milk.out", "w",stdout);
     freopen("milk.in","r",stdin);
     freopen("milk.out", "w",stdout);
    string str;
    int total, num, x=0;
    while (cin>>str)
    {
      if (x==0)
      {
        total = atoi(str.c_str());
        x++;
      }
      else if (x==1)
      {
        num = atoi(str.c_str());
        x++;
      }
      else
      {
        if (x%2==0)
        {
          price.push_back(atoi(str.c_str()));
          x++;
        }
        else
        {
          quantity.push_back(atoi(str.c_str()));
          x++;
        }
        
      }
    }

    for (int i = 0; i < price.size(); i++)
    {
      pq.push_back(make_pair(price.at(i), quantity.at(i)));
    }
    
    for (int i = 0; i < pq.size(); i++)
    {
      for (int j = i+1; j < pq.size(); j++)
      {
        if(pq.at(j).first>pq.at(i).first)
        {
          pair<int,int> temp = pq.at(i);
          pq.at(i) = pq.at(j);
          pq.at(j) = temp;
        }
      }
      
    }
    


    int result = 0;
    for (int i = pq.size()-1; i>=0; i--)
    {
      if (total<=0)
      {
        break;
      }
      if(total-pq.at(i).second>=0)
      {
        total-=pq.at(i).second;
        result += pq.at(i).first*pq.at(i).second;
      }
      else
      {
        result += total*pq.at(i).first;
        total = 0;
      }
      
    }
    
    cout<<result<<endl;
}

int main()
{
  getData();
}
