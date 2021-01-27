
#include"731.h"
int main(){
    Screen myScreen(5,5,'X')    ;
    myScreen.move(4,0).set('#').display(cout);
    myScreen.display(cout);
    return 0;
}
