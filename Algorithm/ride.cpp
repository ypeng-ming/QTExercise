///* Use the slash-star style comments or the system won't see your
//   identification information */
///*
//ID: pengyon1
//TASK: ride
//LANG: C++
//*/
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <unordered_map>
//#include <cassert>

//std::string & trim(std::string&);

//std::string& trim(std::string &str)
//{
//    if(str.empty()){
//        return str;
//    }
//    str.erase(0, str.find_first_not_of(" "));
//    str.erase(str.find_last_not_of(" ") +1);
//    return str;
//}

//int* getArrayResult(std::string path, std::unordered_map<char, int> dataMap)
//{
//    int* retArray = new int[2];

//    std::ifstream fin;
//    fin.open(path);
//    if(!fin.is_open())
//    {
//        std::cerr<<"open file failed!"<<std::endl;
//        exit(-1);
//    }
//        std::string str;
//        int x=0;
//        while(getline(fin, str)){
//            trim(str);
//            int element = dataMap[str[0]];
//            for(int i=1; i<str.size(); i++)
//            {
//                element *= dataMap[str[i]];
//            }
//            retArray[x++] = element%47;
//        }
//        fin.close();
//        return retArray;
//}

//std::string getSign(std::string path, std::unordered_map<char, int> dataMap)//
//{
//    int* data = getArrayResult(path, dataMap);
//    int t = 2;
//     int f = 4;
//    if(data[0]==data[1]){
//        delete[] data;
//        return "GO";

//    }
//    delete[] data;
//    return "STAY";
//}


//int main()
//{
//    std::unordered_map<char, int> dataMap
//    {
//      {'A', 1},
//      {'B',2},
//        {'C',3},
//        {'D',4},
//        {'E',5},
//        {'F',6},
//        {'G',7},
//        {'H',8},
//        {'I',9},
//        {'J',10},
//        {'K',11},
//        {'L',12},
//        {'M',13},
//        {'N',14},
//        {'O',15},
//        {'P',16},
//        {'Q',17},
//        {'R',18},
//        {'S',19},
//        {'T',20},
//        {'U',21},
//        {'V',22},
//        {'W',23},
//        {'X',24},
//        {'Y',25},
//        {'Z',26},
//    };
//        //std::string path = "D:\\QtProjects\\ConsoleTest\\ride.in";//"ride.in";
//        //std::string pathOut ="D:\\QtProjects\\ConsoleTest\\ride.out"; //"ride.out";
//        std::string path ="ride.in";
//        std::string pathOut ="ride.out";
//        //std::cout<<"adasd"<<std::endl;
//        std::ofstream fout;
//        fout.open(pathOut);
//        if(!fout.is_open()){
//            std::cout<<"can't write file!"<<std::endl;
//            exit(-1);
//        }
//        char * result = getSign(path, dataMap).data();//

//        std::string str = result;
////        int position = str.size();
////        fout.write(result, position+1);
//        fout<<str<<std::endl;
//        fout.close();
//        return 0;
//}

//#include <stdio.h>
//#include <ctype.h>

//int
//hash(char *s)
//{
//	int i, h;

//	h = 1;
//	for(i=0; s[i] && isalpha(s[i]); i++)
//		h = ((s[i]-'A'+1)*h) % 47;
//	return h;
//}

//void
//main(void)
//{
//	FILE *in, *out;
//	char comet[100], group[100];  /* bigger than necessary, room for newline */

//	in = fopen("input.txt", "r");
//	out = fopen("output.txt", "w");

//	fgets(comet, sizeof comet, in);
//	fgets(group, sizeof group, in);

//	if(hash(comet) == hash(group))
//		fprintf(out, "GO\n");
//	else
//		fprintf(out, "STAY\n");
//	exit (0);
//}
