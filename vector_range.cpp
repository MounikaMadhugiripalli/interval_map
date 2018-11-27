/*
 * vector_range.cpp
 *
 *  Created on: Nov 15, 2018
 *      Author: mounika.madhugiripalli
 */
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> Range(int start,int end,int step){
    int i = start;
    vector<int> vec ;
    while(i<=end){
        vec.push_back(i);
        i+=step;
    }
    return vec;
}

int main()
{

    vector<int> range;
    range = Range(1,20,5);

    for(auto vin: range)
        cout<<vin<<" ";

}




