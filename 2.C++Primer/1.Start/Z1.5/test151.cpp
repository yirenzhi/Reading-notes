#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item s1;
	Sales_item sum1;
	while(std::cin>>s1)
	{
		sum1 += s1;
		std::cout<< s1<<std::endl;
	}
	std::cout<< sum1<<std::endl;
	return 0;
}

