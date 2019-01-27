#include <iostream>
using namespace std;

template <class T> 
class Numbers
{
	private:
		T a;
		T b;
	public:
		Numbers(T a, T b) {
			this->a = a;
			this->b = b;
		}
	
		T add()
		{
			return a+b;
		}
};

int main() 
{
	Numbers <int> ints(2,3);
	cout<<"sum="<<ints.add()<<endl;

	Numbers <double> floats(4.5, 9.45667);
	cout<<"sum="<<floats.add()<<endl;

	return 0;
}

