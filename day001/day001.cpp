
/*
#include <iostream>
using namespace std;

int main() {
	cout << "hello,world" << endl;  //编程语的开始
	return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{

	int n;
	cout << "输入一个整数n，然后继续输入n个整数，程序将输出它们的和：" << endl;
	//多组输入输出
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cin >> x;
		sum += x;
	}
	cout << sum << endl;
	return 0;
}
