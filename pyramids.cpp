/*
 * pyramids.cpp
 *
 *  Created on: Nov 15, 2018
 *      Author: mounika.madhugiripalli
 */
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int main()
{

    cout<<"enter height:\n";
    int height,i,j;
    cin>>height;
    int h = 2* height -1;
    int spaces,hashes;
    for(i=0;i<height;i++) {
        spaces = height - (i+1);
        hashes = (2 *i) + 1;
        for(j=0;j<h;j++) {
            if(j<spaces)
                cout<<' ';
            else if((j> spaces)&&(j<=(spaces + hashes)))
                cout<<'#';
            else
                cout<<' ';
        }
        //k += 2;
        cout<<"\n";
    }


}




