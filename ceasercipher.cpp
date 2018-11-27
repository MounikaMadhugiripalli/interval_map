/*
 * ceasercipher.cpp
 *
 *  Created on: Nov 16, 2018
 *      Author: mounika.madhugiripalli
 */

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

string CeaserCipher(string str,int key,bool var){
    if(var == true)
        key = key * (-1);
        string encryptstr;
        for(char a : str){
            int s = a;
            s +=key;
            char s1 = s;
            encryptstr +=s1;;
        }
        return encryptstr;

        string decryptstr;
        /*string s;

        bool flag = false;
        for(int i = 0; i < str.length(); i += 2){
            string s = "";
            s +=str[i];
            s +=str[i+1];
            int a = stoi(s) - key;
            char st  = a;
                decryptstr += st;

        }*/
   //     return decryptstr;


}
int main()
{
    string phrase = "Mounika";
    string encryptstr = CeaserCipher(phrase,5,true);
    cout<<encryptstr<<endl;
    string decryptstr = CeaserCipher(encryptstr,5,false);
    cout<<decryptstr<<endl;
}

