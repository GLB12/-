#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)//���������Լ��
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

bool isleap(int year)//�ж��Ƿ�Ϊ����
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return true;
	else
		return false;
}

int factorNum(unsigned int a)//��һ������������
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
	///����һ��������������������Լ������С������
	
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
	cout <<"���Լ����"<< temp<<endl<<"��С��������"<<zxgb;
	*/

	/*
	//���ŵƵ�����
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