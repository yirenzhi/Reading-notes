#include<iostream>
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};
int main()
{
    string line,word;
    vector<PersonInfo> people;
    istringstream record;
    istringstream iss("data");

    while(getline(iss,line))
    {
        PersonInfo info;
        record.clear();
        record.str(line);
        record>>info.name;
        while(record>>word)
        {
            info.phones.push_back(word);
        }
        people.push_back(info);
        
    }
    for(auto& p:people)
    {
        ostringstream formatted,badNums;
        cout<<p.name<<endl;
        for(auto& s:p.phones)
        {
            cout<<s<<" ";
        }
        cout<<endl;
    }
}
