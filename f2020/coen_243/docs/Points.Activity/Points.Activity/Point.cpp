
#include "Point.h"

//constructor
Point::Point()
{
	x=0;
	y=0;

}

Point::Point(int x, int y) {
	this-> x = x;
	this-> y = y;
}

//getters
int Point::getx()
{
	return x;
}

int Point::gety()
{
	return y;
}


//setters
void Point::setx(int xvalue)
{
	x=xvalue;
}

void Point::sety(int yvalue)
{
	y=yvalue;
}

//comparison
bool Point::compare_p(Point P)
{
	if (x==P.x && y==P.y)
		return true;
	else
		return false;
}

Point *Point::reverse()
{
	Point *p2 = new Point(); // IMPORTANT
    p2->x=y;
    p2->y=x;
    return p2;
}

void Point::moveBy(int a){

	x=x+a;
	y=y+a;
}

