#include<iostream.h>
#include<string>
using namespace std;

class Person(){
public:
    getName()const{
        return name;
    }
    getAddress()const{
        return address;
    }

    string name;
    string address;
}

std::ostream& print(std::iostream& ost,const Person& per)
{
    ost<<"name:"<<per.getName<<" address:"<<per.getAddress<<endl;
    return ost;
}

std::istream& read(std::istream& ist, Person& per)
{
    ist>>per.name>>per.address;
    return ist;
}
