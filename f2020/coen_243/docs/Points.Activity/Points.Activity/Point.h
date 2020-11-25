#include <iostream>
#include <iomanip>
using namespace std;

class Point {

	public:
		Point();	// constructor
		Point(int x, int y); // overloading constructor
		void setx(int x);
		void sety(int y);
		int getx();
		int gety();
		bool compare_p(Point p);
		Point* reverse();
		void moveBy(int a);

	private:
		int x;
		int y;
};

