#include<iostream>
using namespace std;
int main() 
{
	/*char jj;
	cin >> jj;
	if (jj>= 'a' && jj <= 'z')
	{
		cout << char(toupper(jj)) << endl;
	}
	else { cout << jj + 1 << endl; }*/
	/*double x, y;
	int num=0;
	while (num <= 4) {
		cin >> x;
		if (x > 0 && x < 1)
		{
			y = 3 - 2 * x;
		}
		else if (x >= 1 && x < 5)
		{
			y = 2 / (4 * x) + 1;
		}
		else { y = x * x; }
		cout << "y=" << y << endl;
		num++;
	}*/
	/*double a, b, c, C;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || a == c || b == c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		else { cout << "不为等腰三角形" << endl; }
		C = a + b + c;
		cout << C  << endl;
	}
	else { cout << "错误" << endl; }*/

	/*double a, b, n;
	char c;
	cout << "请输入两个数字" << endl;
	cin >> a >> b;
	cout << "请输入一个运算符" << endl;
	cin >> c;
	if (c == '+' || c == '-' || c == '*' || c == '/') {
		switch (c)
		{
		case '+':n = a + b; break;
		case '-':n = a - b; break;
		case '*':n = a * b; break;
		case '/':if (b != 0)
		{
			n = a / b; break;
		}
				else { cout << "错误" << endl; }
		}
		cout << n << endl;
	}else { cout << "错误" << endl; }*/
	/*int a, b, c, d;
	a = b = c = d = 0;
	char e;
	cout << "请输入一串字符" << endl;*/

	/*int a, b, max, min;
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	for (max = a < b ? a : b; a % max != 0 || b % max != 0; max--) {  }
		cout << "最大公倍数为" << max << endl;
	for (min = a < b ? b : a; min % a != 0 || min % b != 0; min++) {}
		cout << "最小公约数为" << min << endl;*/

	/*for (int a = 0; a <= 4; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			cout << "*";
		}
		cout << "*" << endl;
	}*/

	/*double a, f, b;
	cout << "请输入一个数a" << endl;
	cin >> a;
	f = a;
	b = (a + f / a) / 2;
	while (b - a > 1e-5 || b - a < -1e-5)
	{
		a = b;
		b= (a + f / a) / 2;
	} 
	cout << "结果为"<<b << endl;*/
	/*double a = 0.8,aver;
	int b,num,day;
	for (num = 0, b = 2, day = 0; num <= 100; day++,b=2*b)
	{
		num = num + b;
	}
	aver = num * a / day;
	cout << "平均价钱为" << aver << endl;*/

	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;

	std::cout << "请输入一行字符：" << std::endl;
	while (std::cin.get(c)) { // 使用std::cin.get()读取每个字符，包括空格和换行符
		if (std::isalpha(c)) { // 判断是否为英文字母
			letters++;
		}
		else if (std::isspace(c)) { // 判断是否为空格
			spaces++;
		}
		else if (std::isdigit(c)) { // 判断是否为数字
			digits++;
		}
		else { // 其他字符
			others++;
		}
		if (c == '\n' || c == EOF) { // 检查是否到达行尾或文件结束
			break;
		}
	}

	std::cout << "英文字母个数: " << letters << std::endl;
	std::cout << "空格个数: " << spaces << std::endl;
	std::cout << "数字字符个数: " << digits << std::endl;
	std::cout << "其他字符个数: " << others << std::endl;
	return 0;








}