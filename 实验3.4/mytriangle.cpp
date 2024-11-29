#include <iostream>
#include "mytriangle.h"
using namespace std;
int main()
{
	double side1, side2, side3;
	cout << "请输入边长" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
	{
		cout << "面积为" << area(side1, side2, side3) << endl;
	}
	else 
	{
		cout << "信息错误" << endl;
	}
}