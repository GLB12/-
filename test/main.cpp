#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)//求两数最大公约数
{
	int max = (a > b) ? a : b;
	int min = (a < b) ? a : b;
	if (max % min == 0)
		return min;
	else
	{
		int c = max % min;
		gcd(min, c);
	}
}

bool isleap(int year)//判断是否为闰年
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return true;
	else
		return false;
}

int factorNum(unsigned int a)//求一个数的因子数
{
	int num = 1;
	if (a < 1)
		return 0;
	else
	{
		for (int i = 1; i <= a / 2; i++)
		{
			if (a%i == 0)
				num++;
		}
		return num;
	}
}
int main()
{
	/*
	///输入一组数，输出这组数的最大公约数和最小公倍数
	
	vector<int>a; int m = 0; int temp; char c;
	cin >> temp; a.push_back(temp);

	while ((c = getchar()) != '\n') 
	{
		m++;
		cin >> temp;
		a.push_back(temp);
	}
	temp = gcd(a[0], a[1]);
	int zxgb = a[0] * a[1] / temp;
	for (int i = 1; i < a.size(); i++)
	{
		temp=gcd(a[i],temp);
		zxgb=a[i]*zxgb/gcd(a[i], zxgb);
	}
	cout <<"最大公约数："<< temp<<endl<<"最小公倍数："<<zxgb;
	*/

	/*
	//亮着灯的数量
	int temp;
	cin >> temp;
	int num = 0;
	for (int i = 1; i < temp; i++)
	{
		if (factorNum(i) % 2 == 1)
			num++;
	}
	cout << num;
	*/

	system("pause");
	return 0;
}