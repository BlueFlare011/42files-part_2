#include "Point.hpp"

bool	bsp(Point &a, Point &b, Point &c, Point &point)
{
	float total_area = a.getArea(b, c);
	float area1 = point.getArea(a, b);
	float area2 = point.getArea(b, c);
	float area3 = point.getArea(a, c);

	return (total_area == area1 + area2 + area3);
}
