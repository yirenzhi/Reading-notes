#include"../../7.Classes/7.3/7_26.h"
#include<fstream>

int main(int argc,char **argv)
{
    Sales_data total;
    cout<<"argc:"<<argc<<endl;
    if(argc<3)
    {
        cout<<"error"<<endl;
        return 0;
    }
    fstream f(argv[1]);
    ofstream f1(argv[2],ofstream::app);
    if(read(f,total)){
        Sales_data trans;
        while(read(f,trans))
        {
            if(trans.isbn()==total.isbn())
            {
                total.combine(trans);
            }
            else{
                print(f1,total);
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
