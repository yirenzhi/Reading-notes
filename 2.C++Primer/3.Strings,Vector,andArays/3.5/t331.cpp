#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int a[10];
	for(unsigned i=0;i<10;i++){
		a[i]=i;
	}
	for(auto m:a)
	{
		cout<<m<<ends;
	}
	int b[10];
	for(unsigned i=0;i<10;i++)
	{
		b[i]=a[i];
	}

	for(auto m:b)
	{
		cout<<m<<ends;
	}
	vector <int> v;
	for(unsigned i=0;i<10;i++)
	{
		v.push_back(i);
	}
	vector<int> v1=v;
	
	for(auto m:v1)
	{
		cout<<m<<ends;
	}
    return 0;
}
