
/*
#include <iostream>
using namespace std;

int main() {
	cout << "hello,world" << endl;  //编程语的开始
	return 0;
}
*/


/*
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
*/



#include <iostream>
using namespace std;
/*
int main()
{
	int n;
	cout << "输入比10小的整数n:" << endl;
	cin >> n;
	//遍历数组
	int arr[10];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	return 0;
}
*/


#include <iostream>
using namespace std;

int main()
{
	int n;
	double sum = 0;
	cin >> n;
	int arr[100];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sum /= n; //输出平均值
	cout << sum << endl;
	return 0;
}

