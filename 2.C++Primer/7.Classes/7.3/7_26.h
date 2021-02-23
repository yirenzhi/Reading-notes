#pragma once
#include<iostream>
#include<string>
using namespace std;
class Sales_data{
friend ostream &print(ostream& ost,const Sales_data&data1);
friend istream &read(istream& ist,Sales_data&data1);
public:
    Sales_data()=default;
    Sales_data(const string&s):bookNo(s){}
    Sales_data(const string&s,const unsigned &n,const double& p):bookNo(s),units_sold(n),revenue(p*n){}
    Sales_data(istream&ist){
        double price;
        ist>>this->bookNo>>this->units_sold>>price;
        this->revenue=this->units_sold*price;
    }
    string isbn() const{
        return bookNo;
    }
   Sales_data& combine(const Sales_data&);
   double avg_price() const;
private:
    string bookNo;
    unsigned units_sold=0;
    double revenue = 0.0;
};

double Sales_data::avg_price() const{
    if(units_sold==0)
    {
        return 0;
    }
    else{
        return revenue/units_sold;
    }
}

Sales_data& Sales_data::combine(const Sales_data&data1){
    units_sold+=data1.units_sold;
    revenue+=data1.revenue;
    return *this;
}
Sales_data add(const Sales_data&,const Sales_data&);
ostream &print(ostream& ost,const Sales_data&data1)
{
    ost<<"bookNo:"<<data1.bookNo<<" sold:"<<data1.units_sold<<" revenue:"<<data1.revenue<<endl;
    return ost;

}
istream &read(istream& ist,Sales_data&data1)
{
    double price;
    ist>>data1.bookNo>>data1.units_sold>>price;
    data1.revenue=data1.units_sold*price;
    return ist;
    
}
