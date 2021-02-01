
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
void read(const string name,vector<string>& datas)
{

    fstream f(name);
    if (f) {
        
    string buf;
    while(f>>buf)
    {
        datas.push_back(buf);
    }
    }

}
int main()
{
    vector<string> datas;
    read("data",datas);
    for(const auto& data:datas)
        cout<<data<<endl;

    return 0;
}
