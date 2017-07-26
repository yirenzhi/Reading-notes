#ifndef _EX7_24_H
#define _EX7_24_H

class Screen{
public:
	typedef string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd):height(ht),width(wd),contents(ht*wd," "){}
	Screen(pos ht, pos wd, char c): height(ht), width(wd),contents(ht*wd,c){}
	char get() const
	{return contents[cursor];}
	char get(pos ht, pos wd)const;
	Screen &move(pos r, pos c);
private:
	pos cursor = 0;
	pos height =0;
	pos width =0;
	string contents;
}
char Screen::get(pos ht, pos wd)const
{
	return contents[ht*width+wd];
}
Screen&Screen::move(pos r, pos c)
{
	pos row= r*width;	
	cursor = row+c;
	return *this;
}
#endif
