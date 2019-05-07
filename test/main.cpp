#include <iostream>
#include <vector>
using namespace std;

int fun(int a, int b)//求两数最大公约数
{
	int max = (a > b) ? a : b;
	int min = (a < b) ? a : b;
	if (max % min == 0)
		return min;
	else
	{
		int c = max % min;
		fun(min, c);
	}
}
int main()
{
	vector<int>a; int m = 0; int temp; char c;
	cin >> temp; a.push_back(temp);

	while ((c = getchar()) != '\n') 
	{
		m++;
		cin >> temp;
		a.push_back(temp);
	}
	temp = fun(a[0], a[1]);
	int zxgb = a[0] * a[1] / temp;
	for (int i = 1; i < a.size(); i++)
	{
		temp=fun(a[i],temp);
		zxgb=a[i]*zxgb/fun(a[i], zxgb);
	}
	cout <<"最大公约数："<< temp<<endl<<"最小公倍数："<<zxgb;
	system("pause");
	return 0;
}