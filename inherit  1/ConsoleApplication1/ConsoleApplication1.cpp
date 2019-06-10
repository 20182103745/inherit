// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// ����
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

// ������
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

	// �����������
	cout << "Total area: " << Rect.getArea() << endl;

	return 0;
}

