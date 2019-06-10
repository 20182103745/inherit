// inherit 2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// ���� CShape
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

// ���� CPaintCost
class CPaintCost
{
public:
	int getCost(int area)
	{
		return area * 70;
	}
};

// ������
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

	// �����������
	cout << "Total area: " << Rect.getArea() << endl;

	// ����ܻ���
	cout << "Total paint cost: $" << Rect.getCost(area) << endl;

	return 0;
}