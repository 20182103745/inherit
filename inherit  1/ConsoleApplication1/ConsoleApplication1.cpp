// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// 基类
class CShape
{
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
protected:
	int width;
	int height;
};

// 派生类
class CRectangle : public CShape
{
public:
	int getArea()
	{
		return (width * height);
	}
};

int main(void)
{
	CRectangle Rect;

	Rect.setWidth(5);
	Rect.setHeight(7);

	// 输出对象的面积
	cout << "Total area: " << Rect.getArea() << endl;

	return 0;
}

