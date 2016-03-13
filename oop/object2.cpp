#include <iostream>

using namespace std;

class Shape
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

class PaintCost
{
public:
	int getCost(int area)
	{
		return area * 70;
	}
};

class Rectangle : public Shape, public PaintCost
{
public:
	//Rectangle();
	//~Rectangle();
	int getArea()
	{
		return (width * height);
	}
	
};

int main()
{
	Rectangle Rect;
	int area;

	Rect.setWidth(5);
	Rect.setHeight(7);

	area = Rect.getArea();
	cout << "Total area: " << area << endl;

	cout << "Total paint cost: $" << Rect.getCost(area) << endl;

	return 0;

}