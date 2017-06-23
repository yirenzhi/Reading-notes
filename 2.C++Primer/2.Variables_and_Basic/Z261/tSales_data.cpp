#include<iostream>

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
int main()
{
/*	Sales_data d1,d2;
	double price =0;
	std::cin>>d1.bookNo>>d1.units_sold>>price;
	d1.revenue = d1.units_sold * price;

	
	std::cin>>d2.bookNo>>d2.units_sold>>price;
	d2.revenue = d2.units_sold * price;

	if(d1.bookNo==d2.bookNo){
		double total_rev = d1.revenue + d2.revenue;
		unsigned total_units = d1.units_sold + d2.units_sold;
		std::cout<< "total_rev: "<<total_rev
				<<"total_units: "<<total_units<<std::endl;
	}
	else{
		std::cout<<"not same book"<<std::endl;
	}
*/
	int nums=1;
	Sales_data d1,d2;
	double price =0;
	std::cin>>d1.bookNo>>d1.units_sold>>price;
	while(std::cin>>d2.bookNo>>d2.units_sold>>price){
		if(d1.bookNo==d2.bookNo){
			nums++;
		}
		else{
			std::cout<<nums<<" "<<d1.bookNo<<std::endl;
			nums=1;
			d1.bookNo=d2.bookNo;
		}
	}

	std::cout<<nums<<" "<<d1.bookNo<<std::endl;
	return 0;
}
