#include <iostream>
#include<string>
using namespace std;

int main()
{
	string phrase = "mounika works in germany";
	cout<<phrase.length()<<endl;
	phrase[0] = 's';

	cout<<phrase.find("oun",0)<<endl;
	cout<<phrase.find("nam",0)<<endl;

	string sub = phrase.substr(0,8);
	cout<<sub<<endl;

	cout<< phrase.replace(0,7,"siva")<<endl;
	cout<<phrase;
	for(auto it= phrase.begin();it!=phrase.end();it++)
		cout<<*it;

}


