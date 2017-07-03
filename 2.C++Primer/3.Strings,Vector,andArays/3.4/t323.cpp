#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<int> vecint(10,5);
	for(auto a=vecint.begin();a!=vecint.end();a++){
		(*a) *=2;
	}
	for(auto a : vecint){
		cout<<a<<endl;
	}
    return 0;
}
