#include <iostream>
#include <iomanip>
#include <bitset>
using namespace std;

int main()
{
	int a = 10;
	float b = 2.67;
	double c = 5.456785687890;

	cout<<dec<<a<<endl;
	cout<<setbase(2)<<a<<endl;
//	cout<<hex<<a<<endl;
	//cout<<binary<<a<<endl;
	cout<<setprecision(5)<<b<<endl;
	cout<<scientific<<setw(5)<<setprecision(5)<<c<<endl;
//	print_binary(a);*/
	int v = 0x12345678;
	cout << bitset<32>(v)<<endl;
//	cout<< bitset<8>(a)<<endl;
	//cout<<a;
	for(int i =31;i>=0;i--)
		cout<<((v>>i)&1);

	return 0;
}


