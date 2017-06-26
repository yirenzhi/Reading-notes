#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector <int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10,42};
	vector<int> v6{10};
	vector<string> v7{10,"hi"};
	cout<<"v1 size :"<<v1.size()<<"  i think is 0"<<endl;
	cout<<"v2 size :"<<v2.size()<<"  i think is 10"<<endl;
	cout<<"v3 size :"<<v3.size()<<"  i think is 10"<<endl;
	cout<<"v4 size :"<<v4.size()<<"  i think is 1"<<endl;
	cout<<"v5 size :"<<v5.size()<<"  i think is 2"<<endl;
	cout<<"v6 size :"<<v6.size()<<"  i think is 1"<<endl;
	cout<<"v7 size :"<<v7.size()<<"  i think is 10"<<endl;

    return 0;
}
