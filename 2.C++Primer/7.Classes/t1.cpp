#include<iostream>
#include<string>
#include"ex7_21.h"
#include"ex7_25.h"

using namespace std;
int main()
{
//	Sales_data data1("abc",4,5);
//	print(cout,data1);
	Screen myScreen(5,5,'X');
	myScreen.move(4,0).set('#').display(cout);
	cout<<'\n';
	myScreen.display(cout);
	cout<<'\n';

    return 0;
}
