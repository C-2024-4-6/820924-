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
			cout << "��������Ϊ����������" << endl;
		}
		else { cout << "��Ϊ����������" << endl; }
		C = a + b + c;
		cout << C  << endl;
	}
	else { cout << "����" << endl; }*/

	/*double a, b, n;
	char c;
	cout << "��������������" << endl;
	cin >> a >> b;
	cout << "������һ�������" << endl;
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
				else { cout << "����" << endl; }
		}
		cout << n << endl;
	}else { cout << "����" << endl; }*/
	/*int a, b, c, d;
	a = b = c = d = 0;
	char e;
	cout << "������һ���ַ�" << endl;*/

	/*int a, b, max, min;
	cout << "����������������" << endl;
	cin >> a >> b;
	for (max = a < b ? a : b; a % max != 0 || b % max != 0; max--) {  }
		cout << "��󹫱���Ϊ" << max << endl;
	for (min = a < b ? b : a; min % a != 0 || min % b != 0; min++) {}
		cout << "��С��Լ��Ϊ" << min << endl;*/

	/*for (int a = 0; a <= 4; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			cout << "*";
		}
		cout << "*" << endl;
	}*/

	/*double a, f, b;
	cout << "������һ����a" << endl;
	cin >> a;
	f = a;
	b = (a + f / a) / 2;
	while (b - a > 1e-5 || b - a < -1e-5)
	{
		a = b;
		b= (a + f / a) / 2;
	} 
	cout << "���Ϊ"<<b << endl;*/
	/*double a = 0.8,aver;
	int b,num,day;
	for (num = 0, b = 2, day = 0; num <= 100; day++,b=2*b)
	{
		num = num + b;
	}
	aver = num * a / day;
	cout << "ƽ����ǮΪ" << aver << endl;*/

	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;

	std::cout << "������һ���ַ���" << std::endl;
	while (std::cin.get(c)) { // ʹ��std::cin.get()��ȡÿ���ַ��������ո�ͻ��з�
		if (std::isalpha(c)) { // �ж��Ƿ�ΪӢ����ĸ
			letters++;
		}
		else if (std::isspace(c)) { // �ж��Ƿ�Ϊ�ո�
			spaces++;
		}
		else if (std::isdigit(c)) { // �ж��Ƿ�Ϊ����
			digits++;
		}
		else { // �����ַ�
			others++;
		}
		if (c == '\n' || c == EOF) { // ����Ƿ񵽴���β���ļ�����
			break;
		}
	}

	std::cout << "Ӣ����ĸ����: " << letters << std::endl;
	std::cout << "�ո����: " << spaces << std::endl;
	std::cout << "�����ַ�����: " << digits << std::endl;
	std::cout << "�����ַ�����: " << others << std::endl;
	return 0;








}