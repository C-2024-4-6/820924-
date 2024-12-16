#include <iostream>
using namespace std;
class Point
{
private:
	double x;
	double y;
public:
	Point(int a, int b):x(a),y(b){}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "("<<x<<","<<y<<")" << endl;
	}
};
int main()
{
	Point A(60, 80);
	A.display();
	A.setPoint(10, 30);
	A.display();
}