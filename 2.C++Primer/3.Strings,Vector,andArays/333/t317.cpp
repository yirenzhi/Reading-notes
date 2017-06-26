#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string str1;
	vector<string> vecstr;
	while(cin>>str1){
		vecstr.push_back(str1);
	}
	for(auto &str : vecstr){
		for(auto &c:str){
			c=toupper(c);
		}
		cout<<str<<endl;
	}
    return 0;
}
