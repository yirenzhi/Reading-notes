#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t[10];
	int *p = &t[10];
	int a[10]={1,2,3,4,5,6,7,8};
	int *beg = begin(a);
	int *last = end(a);
	for(int *p=beg;p!=last;p++)
	{
		cout<<*p<<endl;
	}
    return 0;
}
