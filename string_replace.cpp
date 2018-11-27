#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string phrase = "mounika works in germany. mounika works in germany. mounika works in germany.mounika";
	
	int pos = 0;
	int size = phrase.length();
	string repstr = "mounika";
	int repstr_len = repstr.length();
	string finstr = "siva";
	int finstr_len = finstr.size();
	//phrase.replace( phrase.begin(), phrase.end(), 'm', 's');
	while (pos  < size ) {
 		pos = phrase.find(repstr,pos);
		phrase.replace(pos,repstr_len,"siva");
		pos = pos + repstr_len;
		size = size - repstr_len + finstr_len;  
		cout<<phrase<<endl;
		cout<<pos<<endl;
		
	}

	cout<<phrase.length()<<endl;
	

//	cout<<phrase.find("oun",0)<<endl;
//	cout<<phrase.find("nam",0)<<endl;

//	string sub = phrase.substr(0,8);
//	cout<<sub<<endl;

//	cout<< phrase.replace(0,7,"siva")<<endl;
	cout<<phrase;
//	for(auto it= phrase.begin();it!=phrase.end();it++)
//		cout<<*it;

}


