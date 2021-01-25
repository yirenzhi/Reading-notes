#include<iostream>
#include<string>
using namespace std;

struct Sales_data{
    string isbn() const{
        return bookNo;
    }
   Sales_data& combine(const Sales_data&);
   double avg_price() const;
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
ostream &print(ostream&,const Sales_data&);
istream &read(istream,Sales_data&);
