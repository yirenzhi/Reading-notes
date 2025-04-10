#include <iostream>

#include <string>
#include "16_6.h"
using namespace std;

template<unsigned M,typename T>
void print(const T (&t)[M]){
    // auto i=0;
    // while (i<M)
    // {
    //     cout<<t[i++];
    //     cout<<" ";
    // }
    for (auto i = begin1(t); i < end1(t); i++)
    {
        cout<<*i<<" ";
    }
    
    cout<<endl;
}
