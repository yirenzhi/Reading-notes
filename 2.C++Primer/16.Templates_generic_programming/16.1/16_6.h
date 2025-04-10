#include <iostream>

#include <string>

using namespace std;

template<unsigned M,typename T>
T* begin1( T (&t)[M]){

    return t;
}
template<unsigned M,typename T>
T* end1( T (&t)[M]){

    return t+M;
}
