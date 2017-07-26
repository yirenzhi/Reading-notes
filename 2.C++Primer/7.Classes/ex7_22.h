ifndef _EX7_22_H
define _EX7_22_H

#include<iostream.h>
#include<string>
using namespace std;

class Person{
public:
	friend std::ostream& print(std::iostream& ost,const Person& per);
	friend std::istream& read(std::istream& ist, Person& per);
public:
	Person() = default;
	Person(string sname, string saddress):name(sname),address(saddress){};
	Person(std::istream &is){
		read(is,*this);
	}
    getName()const{
        return name;
    }
    getAddress()const{
        return address;
    }
private:
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

#endif
