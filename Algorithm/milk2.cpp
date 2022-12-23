///* Use the slash-star style comments or the system won't see your
//   identification information */
///*
//ID: pengyon1
//TASK: milk2
//LANG: C++
//*/

//#include <iostream>
//#include <fstream>
//#include <string>
//#include <map>
//#include <vector>

//using namespace std;

//int main()
// {
//    ofstream fout ("milk2.out");
//    ifstream fin ("milk2.in");

//    int n;
//    fin>>n;
//    map<int, int> mapFarm;
//    for( int i = 0; i != n; ++i )
//    {
//       int is, ie;
//       fin>>is>>ie;
//       mapFarm.insert(make_pair(is, ie));
//    }

//    vector<vector<int> > vecTimes;

//    for(map<int, int>::iterator iter = mapFarm.begin(); iter != mapFarm.end(); ++iter)
//    {
//       bool bFind = false;
//       for(vector<vector<int> >::iterator iterVec = vecTimes.begin(); iterVec != vecTimes.end(); ++iterVec)
//       {
//          if(iter->first <= (*iterVec)[1])
//          {
//             bFind = true;
//             if(iter->second > (*iterVec)[1])
//               (*iterVec)[1] = iter->second;
//          }
//       }

//       if(!bFind)
//            {
//               vector<int> ivec;
//               ivec.push_back(iter->first);
//               ivec.push_back(iter->second);
//               vecTimes.push_back(ivec);
//            }
//    }

//    int iMax1 = 0, iMax2 = 0;
//    for(vector<vector<int> >::iterator iter = vecTimes.begin(); iter != vecTimes.end(); ++iter)
//    {
//       int i = (*iter)[1] - (*iter)[0];
//       if(i > iMax1) iMax1 = i;
//    }

//    for(vector<vector<int> >::iterator iter = vecTimes.begin(); iter != vecTimes.end(); ++iter)
//    {
//       vector<vector<int> >::iterator iter1 = iter + 1;
//       int i = 0;
//       if(iter1 != vecTimes.end())
//         i = (*iter1)[0] - (*iter)[1];
//       if(i > iMax2) iMax2 = i;
//    }


//    fout<<iMax1<<" "<<iMax2<<endl;

//    fin.close();
//    fout.close();
//    return 0;
//}
