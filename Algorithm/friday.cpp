/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: pengyon1
TASK: friday
LANG: C++
*/
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//#include <map>

//struct ARRAY
//{
//   int arr[12];
//};
//std::map<int,std::vector<int>> year_days1;
//std::map<int,ARRAY> year_days;
//std::map<std::string, int> result;
//std::pair<int, ARRAY> getYearDays(int year)
//{
//    std::pair<int,ARRAY> x;
//    if((year%100)==0)
//    {
//        if((year%400)==0)
//        {
//            ARRAY a1  = {31,29,31,30,31,30,31,31,30,31,30,31};
//            std::pair<int,ARRAY> temp (year, a1);
//            return temp;
//        }
//        else
//        {
//            ARRAY a2= {31,28,31,30,31,30,31,31,30,31,30,31};
//             std::pair<int,ARRAY> temp1 (year, a2);
//            return temp1;
//        }
//    }
//    else
//    {
//        if(year%4==0)
//        {
//            ARRAY a1  = {31,29,31,30,31,30,31,31,30,31,30,31};
//            std::pair<int,ARRAY> temp (year, a1);
//            return temp;
//        }
//        else
//        {
//            ARRAY a2= {31,28,31,30,31,30,31,31,30,31,30,31};
//             std::pair<int,ARRAY> temp1 (year, a2);
//            return temp1;
//        }
//    }

//    return x;
//}

//void getData(std::string path,std::map<int, std::string> reflection)
//{
//    std::ifstream fin;
//    fin.open(path,std::ios::in);
//    if(!fin.is_open())
//    {
//        std::cout<<"can't open in file!"<<std::endl;
//        exit(-1);
//    }
//    std::string str;
//    int numYear;
//    while(std::getline(fin, str))
//    {
//        numYear = std::atoi(str.c_str());
//    }
//    for(int i=1900; i<1900+numYear; i++)
//    {
//        year_days.insert(getYearDays(i));
//    }
//    int totalDay = 13;
//    for(int i=1900; i<1900+numYear; i++)
//    {
//        int * arr = year_days[i].arr;
//        for(int j = 0; j<12;j++)
//        {
//            std::string day = "";
//            int index;

//                index =(totalDay-1)%7;
//                day = reflection[index];
//                result[day] +=1;
//                totalDay+=arr[j];

//        }
//    }
//}

//int main(void)
//{

//    result.insert(std::pair<std::string, int>("Monday",0));
//    result.insert(std::pair<std::string, int>("Tuesday",0));
//    result.insert(std::pair<std::string, int>("Wednesday",0));
//    result.insert(std::pair<std::string, int>("Thursday",0));
//    result.insert(std::pair<std::string, int>("Friday",0));
//    result.insert(std::pair<std::string, int>("Saturday",0));
//    result.insert(std::pair<std::string, int>("Sunday",0));
//    std::map<int, std::string> reflection;
//    reflection.insert(std::pair<int, std::string>(0,"Monday"));
//    reflection.insert(std::pair<int, std::string>(1,"Tuesday"));
//    reflection.insert(std::pair<int, std::string>(2,"Wednesday"));
//    reflection.insert(std::pair<int, std::string>(3,"Thursday"));
//    reflection.insert(std::pair<int, std::string>(4,"Friday"));
//    reflection.insert(std::pair<int, std::string>(5,"Saturday"));
//    reflection.insert(std::pair<int, std::string>(6,"Sunday"));
//    std::vector<std::string> strV;
//    strV.push_back("Saturday");
//     strV.push_back("Sunday");
//     strV.push_back("Monday");
//     strV.push_back("Tuesday");
//     strV.push_back("Wednesday");
//     strV.push_back("Thursday");
//     strV.push_back("Friday");
////    std::string path = "D:\\QtProjects\\ConsoleTest\\friday.in";
////    std::string pathout = "D:\\QtProjects\\ConsoleTest\\friday.out";
//    std::string path = "friday.in";
//    std::string pathout = "friday.out";
//    getData(path, reflection);
//    std::ofstream fout;
//    fout.open(pathout);
//    std::string str;
//    for(int i =0; i<strV.size(); i++)
//    {
//        if(i==(strV.size() - 1))
//        {
//             str += std::to_string(result[strV[i]]);
//        }
//        else
//            str += std::to_string(result[strV[i]]) + " ";
//    }
//    str += "\n";
//    fout<<str;
//}

// official answer

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>

//int
//isleap(int y)
//{
//    return y%4==0 && (y%100 != 0 || y%400 == 0);
//}

//int mtab[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

///* return length of month m in year y */
//int
//mlen(int y, int m)
//{
//    if(m == 1)    /* february */
//        return mtab[m]+isleap(y);
//    else
//        return mtab[m];
//}

//void
//main(void)
//{
//    FILE *fin, *fout;
//    int i, m, dow, n, y;
//    int ndow[7];

//    fin = fopen("friday.in", "r");
//    fout = fopen("friday.out", "w");
//    assert(fin != NULL && fout != NULL);

//    fscanf(fin, "%d", &n);

//    for(i=0; i<7; i++)
//        ndow[i] = 0;

//    dow = 0;    /* day of week: January 13, 1900 was a Saturday = 0 */
//    for(y=1900; y<1900+n; y++) {
//        for(m=0; m<12; m++) {
//            ndow[dow]++;
//            dow = (dow+mlen(y, m)) % 7;
//        }
//    }

//    for(i=0; i<7; i++) {
//        if(i)
//            fprintf(fout, " ");
//        fprintf(fout, "%d", ndow[i]);
//    }
//    fprintf(fout, "\n");

//    exit(0);
//}
