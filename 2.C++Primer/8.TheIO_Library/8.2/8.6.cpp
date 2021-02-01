#include"../../7.Classes/7.3/7_26.h"
#include<fstream>

int main(int argc,char **argv)
{
    Sales_data total;
    cout<<"argc:"<<argc<<endl;
    fstream f(argv[1]);
    if(read(f,total)){
        Sales_data trans;
        while(read(f,trans))
        {
            if(trans.isbn()==total.isbn())
            {
                total.combine(trans);
            }
            else{
                print(cout,total);
                total = trans;
            }
        }
        print(cout,total);
    }
    else{
        cerr<<"No data"<<endl;
    }
    return 0;
}
