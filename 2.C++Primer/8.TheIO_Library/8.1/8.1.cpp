#include<iostream>
#include<string>

using namespace std;

istream& get(istream& in)
{
    cin.tie(&cout);
    string temp;
    while(cin>>temp)
    {
        cout<<temp<<endl;
    }
    in.clear();
    return in;
}
int main()
{
    istream& in = get(cin);
    cout<<in.rdstate()<<endl;
    return 0;
}
