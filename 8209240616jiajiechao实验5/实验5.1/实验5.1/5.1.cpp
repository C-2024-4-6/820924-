#include <iostream>
#include <string>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	void input()
	{
		cin >> this->hour;
		cin >> this->minute;
		cin >> this->sec;
		cout << this->hour << "��" << this->minute <<  "��" << this->sec << endl;
	}
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.input();
	return 0;
}