// inherit 2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// 基类 CShape
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

// 基类 CPaintCost
class CPaintCost
{
public:
	int getCost(int area)
	{
		return area * 70;
	}
};

// 派生类
class CRectangle : public CShape, public CPaintCost
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
	int area;

	Rect.setWidth(5);
	Rect.setHeight(7);

	area = Rect.getArea();

	// 输出对象的面积
	cout << "Total area: " << Rect.getArea() << endl;

	// 输出总花费
	cout << "Total paint cost: $" << Rect.getCost(area) << endl;

	return 0;
}