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
int main()
{
    Sales_data total;
    if(read(cin,total)){
        Sales_data trans;
        while(read(cin,trans))
        {
            if(trans.isbn()==total.isbn())
            {
                total.combine(trans);
            }
            else{
                print(cout,total);
                total=trans;
            }
        }
        print(cout,total);
    }
    else{
        cerr<<"No data?!"<<endl;
        return -1;
    }
    return 0;
}
