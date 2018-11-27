/*
 * calculator.cpp
 *
 *  Created on: Nov 15, 2018
 *      Author: mounika.madhugiripalli
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include<cstdlib>
#include<cstdio>
using namespace std;

int main()
{
    string expr;
    cout<<"enter expression:\n";
    getline(cin,expr);
    stringstream ss(expr);
    char delim = ' ';
    string str;
    vector<string> vecstr;
    while(getline(ss,str,delim)) {
        vecstr.push_back(str);
    }

    cout<<vecstr[0];
    float num1 = stoi(vecstr[0]);
    float num2 = stoi(vecstr[2]);
    std::string operation = vecstr[1];

       if (operation == "+"){
           printf("%.1f + %.1f = %.1f\n", num1, num2,
                   (num1 + num2));
       } else if (operation == "-"){
           printf("%.1f - %.1f = %.1f\n", num1, num2,
                   (num1 - num2));
       } else if (operation == "*"){
           printf("%.1f * %.1f = %.1f\n", num1, num2,
                   (num1 * num2));
       } else if (operation == "/"){
           printf("%.1f / %.1f = %.1f\n", num1, num2,
                   (num1 / num2));
       } else {
           std::cout << "Please enter only +, -, *, or /\n";
       }

}


