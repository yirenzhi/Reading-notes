#pragma once
#include <iostream>
#include<string>

class NoDefault
{
public:
    NoDefault(int a)
    {

    }
};
class C
{
    C():t(0)
    {

    }
    NoDefault t;
};
