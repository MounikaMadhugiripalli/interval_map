#include<iostream>
#include <list>
#include<algorithm>

using namespace std;

bool comparator(int a,int b){
	return a<b;
}
int main()
{
	list<int> list{1,2,3,4,5};
	list.push_front(0);
	list.push_back(7);
	list.push_back(50);
	cout<<list.size()<<endl;;
	cout<<list.front()<<endl;;
	cout<<list.back()<<endl;
	if(list.front() > list.back())
		cout<<list.front()-list.back()<<endl;
	else
		cout<<list.back()-list.front()<<endl;
	for(std::list<int>::iterator it= list.begin();it!=list.end();it++)
		cout<<*it<<endl;
	list.reverse();
	for(std::list<int>::iterator it= list.begin();it!=list.end();it++)
                cout<<*it<<endl;
	list.sort();
	for(std::list<int>::iterator it= list.begin();it!=list.end();it++)
                cout<<*it<<endl;
	list.unique();
	for(std::list<int>::iterator it= list.begin();it!=list.end();it++)
                cout<<*it;
	int myints[] = {75,23,65,42,13};
  std::list<int> mylist (myints,myints+5);
  mylist.sort();
  std::cout << "mylist contains:";
  std::list<int>::iterator it=mylist.begin();
  advance(it,2);
  list.erase(mylist.begin(),it);
  for (std::list<int>::iterator it1=mylist.begin(); it1 != mylist.end(); ++it1)
    std::cout << ' ' << *it1;
  list.merge(mylist,comparator);
  for(std::list<int>::iterator it= list.begin();it!=list.end();it++)
                cout<<*it<<endl;

  std::cout << '\n';
	return 0;
}
