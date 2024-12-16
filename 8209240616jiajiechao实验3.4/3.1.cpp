//#include <iostream>
//using namespace std;
//int max(int a, int b)
//{
//	int t;
//	if (a >= b)
//	{
//		for (t = b; b % t != 0 || a % t != 0; --t) {}
//	}
//	else 
//	{
//		for (t = a; b % t != 0 || a %t != 0; --t) {}
//	}
//	return t;
//}
//int min(int a, int b)
//{
//	int t = (a <= b) ? b : a;
//	while (t % a != 0 || t % b != 0)
//	{
//		++t;
//	}
//	return t;
//}
//int main()
//{
//	cout << max(4, 6)<<endl;
//	cout << min(4, 6)<<endl;
//	return 0;
//}