#ifndef _EX7_32_H
#define _EX7_32_H

class Screen
{
public:
	friend Window_mgr::clear();
}

class Window_mgr
{
	void clear();
}

#endif
