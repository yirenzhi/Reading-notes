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
	unsigned units_sold =0;
	double revenue = 0.0;
};
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);

double Sales_data::avg_price()const{
	if (units_sold) {
		return revenue/units_sold;
	}else{
		return 0;
	}
}

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
	units_sold+=rhs.units_sold;
	revenue+=rhs.revenue;
	return *this;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data temp = lhs;
	temp.combine(rhs);
	return temp;

}

std::ostream &print(std::ostream& ost, const Sales_data& rhs)
{
	ost<<"bookNo:"<<rhs.bookNo<<" units_sold:"<<rhs.units_sold<<" revenue:"<<rhs.revenue<<endl;
	return ost;
}
std::istream &read(std::istream& ist, Sales_data& rhs)
{
	double price;
	ist>>rhs.bookNo>>rhs.units_sold>>price;
	rhs.revenue=price*rhs.units_sold;
	return ist;
}

int main()
{
	Sales_data total;
	if(read(cin, total)){
		Sales_data trans;
		while (read(cin,trans)) {
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			}else{
				print(cout, total);
				total = trans;
			}
		}
		print(cout, total);
	}
    return 0;
}
