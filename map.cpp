#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map<string,int> students;
    int n,mark,i,j;
    string stud;
    cin>>n;
    map<string,int>::iterator it;
    for(i=0;i<n;i++)
    {
        cin>>j;
        switch(j) {
        case 1:
            cin>>stud>>mark;
                students[stud] +=mark;
            /*if((it = students.find(stud))!=students.end())
                it->second+= mark;
            else 
                students.insert(make_pair(stud,mark));*/
            break;
        case 2:
            cin>>stud;
            //if(students.find(stud)!=students.end())
                students.erase(stud);
            break;
        case 3:
            cin>>stud;
            if((it = students.find(stud))!=students.end())
                cout<<it->second<<endl;
            else
                cout<<"0";
            break;
        default: break;
               /* case 1: std::cin>>mark; students[stud]+=mark; break;
            case 2: students.erase(stud); break;
            case 3: std::cout<<students[stud]<<"\n";*/
        }
            
    }
    return 0;
}

