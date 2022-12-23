/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: pengyon1
TASK: gift1
LANG: C++
*/
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <map>
//#include <stdio.h>
//#include <ctype.h>
//#include <vector>

//std::map<std::string, int> result;
//std::map<std::string, int> result5;
//std::string sequence [200];

//void getData(std::string path)
//{

//    std::ifstream fin;
//    fin.open(path,std::ios::in);
//    if(!fin.is_open())
//    {
//        std::cout<<"can't open in file!"<<std::endl;
//        exit(-1);
//    }
//    std::string str;
//    std::string strNumPerson;
//    int numLine = 0;
//    int numPerson = -1;
//    int money = -1;
//    int shareCount = -1;
//    int addMoney = -1;
//    std::string strData [200];
//    while(std::getline(fin, str))
//    {
//        if(std::isdigit(str[0])||std::isalpha(str[0]))
//        {
//            strData[numLine] = str;
//            numLine++;
//        }
//    }

//    for(int i = 0; i<end(strData)-begin(strData);i++)
//    {
//        if(std::isdigit(strData[i][0])||std::isalpha(strData[i][0]))
//        {
//             if(i==0)
//             {
//                 numPerson = std::atoi(strData[i].c_str());
//                 continue;
//             }
//             if(i!=0&&i<=numPerson)
//             {
//                 std::pair<std::string, int> temp (strData[i],0);
//                // std::cout<<strData[i]<<std::endl;
//                 result.insert(temp);
//                 continue;
//             }
//             if(std::isdigit(strData[i][0]))
//             {
//               std::string temp1 = strData[i].substr(0,strData[i].find(" ")) ;
//               money = std::atoi(temp1.c_str());
//               std::string temp2 = strData[i].substr(strData[i].find(" "), strData[i].length()-1);
//               shareCount = std::atoi(temp2.c_str());
//               if(money==0||shareCount==0)
//                   continue;
//               result[strData[i-1]] -= money ;
//               result[strData[i-1]] += money%shareCount;
//               for(int j=i+1; j<=i+shareCount; j++)
//               {
//                   result[strData[j]] +=money/shareCount;
//               }
//             }
//        }
//    }

// fin.close();
// for(int i=1; i<=numPerson; i++)
// {
//     sequence[i] = strData[i];
// }
//}

//int main()
//{
////    std::string path = "D:\\QtProjects\\ConsoleTest\\gift1.in";
////    std::string pathOut = "D:\\QtProjects\\ConsoleTest\\gift1.out";
//    std::string path = "gift1.in";
//    std::string pathOut = "gift1.out";
//    getData(path);
//    std::ofstream fout;
//    fout.open(pathOut);
//    if(!fout.is_open())
//    {
//        std::cout<<"can't open out file!"<<std::endl;
//        exit(-1);
//    }
//    for(int i=0; i<end(sequence)-begin(sequence); i++)
//    {
//        if(!sequence[i].empty()){
//            fout<<sequence[i]<< " "<<result[sequence[i]]<<std::endl;
//        }
//    }
//        return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <assert.h>

//#define MAXPEOPLE 10
//#define NAMELEN	32

//typedef struct Person Person;
//struct Person {
//    char name[NAMELEN];
//    int total;
//};

//Person people[MAXPEOPLE];
//int npeople;

//void
//addperson(char *name)
//{
//    assert(npeople < MAXPEOPLE);
//	strcpy(people[npeople].name, name);
//    npeople++;
//}

//Person*
//lookup(char *name)
//{
//    int i;

//    /* look for name in people table */
//    for(i=0; i<npeople; i++)
//	if(strcmp(name, people[i].name) == 0)
//	    return &people[i];

//    assert(0);	/* should have found name */
//}

//int
//main(void)
//{
//    char name[NAMELEN];
//    FILE *fin, *fout;
//    int i, j, np, amt, ng;
//    Person *giver, *receiver;

//    fin = fopen("gift1.in", "r");
//    fout = fopen("gift1.out", "w");

//    fscanf(fin, "%d", &np);
//    assert(np <= MAXPEOPLE);

//    for(i=0; i<np; i++) {
//	fscanf(fin, "%s", name);
//	addperson(name);
//    }

//    /* process gift lines */
//    for(i=0; i<np; i++) {
//	fscanf(fin, "%s %d %d", name, &amt, &ng);
//	giver = lookup(name);

//	for(j=0; j<ng; j++) {
//	    fscanf(fin, "%s", name);
//	    receiver = lookup(name);
//	    giver->total -= amt/ng;
//	    receiver->total += amt/ng;
//	}
//    }

//    /* print gift totals */
//    for(i=0; i<np; i++)
//	fprintf(fout, "%s %d\n", people[i].name, people[i].total);
//    exit (0);
//}












