#include <iostream>// cout, cin, endl, boolalpha
#include <cstdio>// printf, scanf
#include <cmath>//pow(x,y) x^y, sqrt(), ceil(),round(),abs()
#include <algorithm>//swap(),max(a,b), min(a,b)

using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		int f = 1;
		for (int j = 1; j <= i; ++j)
		{
			f = f * j;
			//cout << f;
		}
		sum = sum + f;

	}
	

	cout << sum;
	int x = 0;
	cin >> x;
	for (int a = 0; a < x; ++a)
	{
		int b = x - a; // a is space and b is asterisk
		for (int d = 1; d <= a; ++d)
		{
			printf(" ");
		}
		for (int d = 1; d <= b; ++d)
		{
			printf("*");
		}
		cout << endl;
	
	}
	{// variable a here is a temporary varible, we can add{} to restrict its range
		int list[2][3] = { {2,3,9},{10,12,56} }; // when you create a list [x], x is the number of element
		int a = list[1][2];// Answer is 56, take the index starts from 0 instead of 1
		cout << "the sixth element is "<<a << endl;
		for (int i = 1; i <= 2; ++i)
		{
			for (int j = 1; j <= 3; ++j)
			{
				int sum = 0;
				sum = i + j - 1;
				cout << "the " << sum << " element is ";
				cout << list[i - 1][j - 1] << endl;
			}
		}
	}
	// two dimentional data    list[y][x]

	// 2 ways to change the value of two variables 1. swap() 2. the third temp variable
	{
		int V1 = 9;
		int V2 = 2;
		int temp;
		temp = V1;
		V1 = V2;
		V2 = temp;
	}
	{
		int V1 = 9;
		int V2 = 2;
		swap(V1, V2);
		//cout << V1 << endl;
		//cout << V2 << endl;

			
	
	}
	int q = 5;
	int w = 3;
	int x = q;
	int y = w;
	for (; x > 0 && y > 0; --x, --y)
	{
		// There can be no content in for, also for allows more than one variable. 
	}
	abs(-9);
	int f=max(4, 5, 20);

 
	return 0;
}





