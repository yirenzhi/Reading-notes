#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	if(s1==s2){
		cout<<"same string"<<endl;
	}
	else if(s1<s2){
		cout<<"max string is: "<<s2<<std::endl;
	}else{
		cout<<"max string is: "<<s1<<endl;
	}
	auto size1=s1.size();
	auto size2=s2.size();
	if(size1==size2){
		cout<<"same size"<<endl;
	}
	else if(size1<size2){
		cout<<"longer string is: "<<s2<<endl;
	}
	else {
		cout<<"longer string is: "<<s1<<endl;
	}

    return 0;
}
