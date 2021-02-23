#include<iostream>
#include<string>
#include<sstream>
using namespace std;

istream& get(istream& in)
{
    in.tie(&cout);
    string temp;
    while(in>>temp)
    {
        cout<<temp<<endl;
    }
    in.clear();
    return in;
}
int main()
{
    istringstream ss("aa bb");
    istream& in = get(ss);
    cout<<in.rdstate()<<endl;
    return 0;
}
