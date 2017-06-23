#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s("hello ,world!!!");
	decltype(s.size()) nums = 0;
	for(auto c:s)
	{
		if(ispunct(c)){
			nums++;		
		}
	}
	cout<<nums<<" punctuation characters in "<<s<<endl;
	for(auto &c:s)
	{
		c=toupper(c);
	}
	cout<<s<<endl;
    return 0;
}
