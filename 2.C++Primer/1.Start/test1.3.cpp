#include <iostream>
// /*
//a
// */b/*
//c
// */
int main()
{
	std::cout<< "/*"<<std::endl;
	std::cout<<"*/"<<std::endl;

//	std::cout<</* "*/" */<<std::endl;
	std::cout<< /* "*/" /* "/*" */<<std::endl;
	return 0;
}
