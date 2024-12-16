/*#include<iostream>
using namespace std;
int main()
{
	int k = 0;
	int i = k + 1;
	cout << i++ << endl;
	i = 1;
	cout << i++ << endl;
	cout << "Welcome to C++" << endl;
	return 0;
}*///#include<iostream>
/*using namespace std;
int main()
{
	cout << "char length:" << sizeof(char) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "double length:" << sizeof(double) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "bool length:" << sizeof(bool) << endl;
	return 0;
}*/
/*#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned int testUnint = 65534;//oxfffe
	cout << "output in unsigned int 1 type:" << testUnint << endl;//<<oct;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl;//为什么结果为-2?:
	cout << "output in int type:" << static_cast<int>(testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl; //16进制输出
	system("pause");
	cout << std::oct << testUnint << endl;
	const double π = 3.1415926;
	cout << int(π) << endl;
	return 0;
}*/
/*#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
	double F, C;
	cin >> F;
	C = 5 * (F - 32) / 9;
	cout << std::fixed << std::setprecision(2)<<C << endl;
	return 0;
}*/
