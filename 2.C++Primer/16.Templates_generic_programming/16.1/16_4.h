#include <iostream>

#include <string>
#include <vector>
#include <list>
using namespace std;

template <typename I,typename T>
I find(I i,I e,const T& t){
    while(i!=e&&*i!=t)
    {
        ++i;
    }
    return i;
}