//修改const的值
#include<iostream>
#include<string>
using namespace std;
int main()
{
	const volatile int a =10;
	int *p = (int*)&a;
	*p = 6;
	cout<<"a size: "<<a<<endl; 
	int num[a];
	
	cout<<"size: "<<sizeof(num)/sizeof(int)<<endl;
    return 0;
}
