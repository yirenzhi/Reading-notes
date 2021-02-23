#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<vector>
using namespace std;


int main()
{

    fstream fs("data");
    vector<string> strs;
    string temp;
    while(getline(fs,temp))
    {

        strs.push_back(temp);
    }
    for (auto &str : strs)
    {
        istringstream is(str);
        string temp;
        while(is>>temp)
        {
            cout<<temp<<endl;
        }

    }
    
    return 0;
}
