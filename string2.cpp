#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string phrase = "mounika works in germany. mounika works in germany. mounika works in germany.mounika";
	
	int pos = 0;
	string repstr = "mounika";
	int repstr_len = repstr.length();
	while ((pos  = phrase.find(repstr,pos)) != string::npos ) {
		phrase.replace(pos,repstr_len,"siva");
		pos = pos + repstr_len;
		
	}

	cout<<phrase;

}


