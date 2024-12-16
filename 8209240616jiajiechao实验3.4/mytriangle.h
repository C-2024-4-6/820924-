#pragma once
#include <cmath>
bool is_valid(double side1, double side2, double side3)
{
	if (side1 + side2 <= side3 || side3 + side2 <= side1 || side1 + side3 <= side2)
	{
		return false;
	}
	else 
	{
		return true;
	}
}
double area(double side1, double side2, double side3)
{
	double s = s = (side1 + side2 + side3) / 2;
	double S = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return S;
}