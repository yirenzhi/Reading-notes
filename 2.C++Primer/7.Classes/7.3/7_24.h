#pragma once
#include<vector>
#include<string>
#include<iostream>
using namespace std;
class Screen;
class Window_mgr{
public:
    using  ScreenIndex = vector<Screen>::size_type;
    void clear(ScreenIndex);
private:
    //vector<Screen> screens{Screen(24,80,' ')};
    vector<Screen> screens;

};
class Screen{
public:
    //friend class Window_mgr;
    friend void Window_mgr::clear(ScreenIndex);
    typedef std::string::size_type pos;
    Screen()=default;
    Screen(pos ht,pos wd):height(ht),width(wd),contents(ht*wd,' '){}

    Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
    char get()const
    {
        return contents[cursor];
    }
    inline char get(pos ht,pos wd) const;
    Screen &move(pos r,pos c);
    pos size() const;
private:
    pos cursor=0,height=0,width=0;
    string contents;
        
        
};

Screen::pos Screen::size() const{
    return height*width;    
}
char Screen::get(pos ht,pos wd) const
{
    return contents[width*ht+wd];
}
inline Screen& Screen::move(pos r,pos c)
{
    cursor=width*r+c;
    return *this;
}

void Window_mgr::clear(ScreenIndex i)
{
    Screen& s= screens[i];
    s.contents=string(s.height*s.width,' '); 
}
