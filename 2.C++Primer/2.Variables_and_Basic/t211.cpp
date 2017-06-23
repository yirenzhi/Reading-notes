#include<iostream>

int main()
{

	bool t_bool;
	int t_int;
	char t_char;
	short t_short;
	float t_float;
	double t_double;
	long t_long;
	long long t_llong;
	long double t_ldouble;

	std::cout<<"bool size:"<<sizeof(t_bool)<<std::endl;
	std::cout<<"char size:"<<sizeof(t_char)<<std::endl;
	std::cout<<"short size:"<<sizeof(t_short)<<std::endl;
	std::cout<<"int size:"<<sizeof(t_int)<<std::endl;
	std::cout<<"long size:"<<sizeof(t_long)<<std::endl;
	std::cout<<"long long size:"<<sizeof(t_llong)<<std::endl;
	std::cout<<"float size:"<<sizeof(t_float)<<std::endl;
	std::cout<<"double size:"<<sizeof(t_double)<<std::endl;
	std::cout<<"long double size:"<<sizeof(t_ldouble)<<std::endl;
}
