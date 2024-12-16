#include <iostream>
#include <string>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void input()
	{
		cin >> this->hour;
		cin >> this->minute;
		cin >> this->sec;
		cout << this->hour << "：" << this->minute <<  "：" << this->sec << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.input();
	return 0;
}