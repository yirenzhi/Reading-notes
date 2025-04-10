#include "16_4.h"

int main(){
    vector<int> nums{1,3,5,7,8,2};
    auto i = find(nums.begin(),nums.end(),9);
    if(i!=nums.end()){
        cout<<"find it."<<endl;
    }else{
        cout<<"not find."<<endl;
    }
    vector<string> ls{"ni","hao","ma"};
    auto i1 = find(ls.begin(),ls.end(),"ni");
    if(i1!=ls.end()){
        cout<<"find it."<<endl;
    }else{
        cout<<"not find."<<endl;
    }

    return 0;
}