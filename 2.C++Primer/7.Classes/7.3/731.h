#pragma once
#include<vector>
#include<string>
#include<iostream>
using namespace std;
class Screen{
public:
    typedef std::string::size_type pos;
    Screen()=default;
    Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
    char get()const
    {
        return contents[cursor];
    }
    inline char get(pos ht,pos wd) const;
    Screen &move(pos r,pos c);
    Screen &set(char);
    Screen &set(pos,pos,char);
    Screen& display(ostream& os)
    {
        do_display(os);
        return *this;
    }
    const Screen& display(ostream& os)const
    {
        do_display(os);
        return *this;
    }
private:
    pos cursor=0,height=0,width=0;
    string contents;
    void do_display(ostream &os)const {os<<contents<<endl;} 
        
};
char Screen::get(pos ht,pos wd) const
{
    return contents[width*ht+wd];
}
inline Screen& Screen::move(pos r,pos c)
{
    cursor=width*r+c;
    return *this;
}
Screen &Screen::set(char c)
{
    contents[cursor]=c;
    return *this;
}
Screen &Screen::set(pos r,pos l,char c)
{
    contents[width*r+l]=c;
    return *this;
}

class Window_mgr{
private:
    vector<Screen> screens{Screen(24,80,' ')};

};

