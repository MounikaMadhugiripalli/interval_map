/*
 * probbility.cpp
 *
 *  Created on: Nov 18, 2018
 *      Author: mounika.madhugiripalli
 */
#include <iostream>
#include<string>
#include<ctime>
#include<vector>

using namespace std;
vector<char> getprobvect(vector<char> possible){
    int i,j;
    vector<char> probvect;
    srand(time(NULL));
    for(i=0;i<100;i++){
        j= rand() % 2;
        probvect.push_back(possible[j]);
    }
    return probvect;
}

int countdesired(vector<char> probvect,char lookfor){
    int item_count =0;
    for(auto it:probvect){
        if(it == lookfor)
            item_count++;
    }
    return item_count++;
}
int main()
{
    vector<char> possible = {'H','T'};
    int no_of_items = 0;
    vector<char> probvect;
    probvect = getprobvect(possible);
    no_of_items = countdesired(probvect,possible[0]);
    cout<<"no of H's = " <<no_of_items<<endl;
    cout<<"no of T's = " <<(100-no_of_items)<<endl;
    return 0;
}



