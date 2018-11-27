/*
 * regex.cpp
 *
 *  Created on: Nov 18, 2018
 *      Author: mounika.madhugiripalli
 */

#include <iostream>
#include <string>
#include <vector>
#include <regex>

using namespace std;

void matchpattern(string str,regex reg){
    sregex_iterator currentMatch(str.begin(),str.end(),reg);
    sregex_iterator lastMatch;
    smatch match;
    while(currentMatch!=lastMatch) {
        match = *currentMatch;
        cout<<match.str()<<"\n";
        currentMatch++;

    }

}
int main()
{
    /*string str = "emily@gmail.com clara@abc.com siva@xdv.com sfdsf dhgfdj";
    regex reg("[\\w]+[@][\\w]+[\\.][com][^ ]");
    matchpattern(str,reg);*/

    string str1 = "here i am \n this is me\r\n"
                    "and here i come";
    regex reg1 ("[\r\n]+");
    string str2 = regex_replace(str1,reg1," ");
    cout<<str2;


    return 0;
}



