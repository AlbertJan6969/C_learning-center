#include <iostream>// cout, cin, endl, boolalpha
#include <cstdio>// printf, scanf
#include <cmath>//pow(x,y) x^y, sqrt(), ceil(),round(),abs()
#include <algorithm>//swap(),max(a,b), min(a,b)
#include<string> // string
#include<cctype>// isdigit, islower, isupper, tolower, toupper
/*
This file contains functions and char.
*/
using namespace std;

// variables in defined function is also temporary.

int function_x()
{
	;
}

int function_y(void)
{
	;
}
/*
()����û�в������Կ���Ҳ���Լ�void
û�з���ֵ�ĺ�����void���� return����ʡ�Բ�д��Ҳ����return; 
return Ҳ��������ֹ���������� 
*/ 

int base = 0;// declare a variable can be put before the main()
string GlobalWord = "I'm a global varible";
const string Forever = "forever";

void function_z()
{
	return;
} 

void print_nonenegative_number(double num)
{
	if (num <0)
	{
		return;
	} 
	cout<< num << endl;
	printf("%.2f",num);
}

bool if_prime(int num)
{
	if (num<2)
	{
		return false;
	}
	for (int i=2; i < num; ++i)
	{
		if (num % i ==0)
		{
			return false;
		}
	}
	return true;
}

double c_max(double a, double b, double c)
{
	int d = a;
	if (b > a)
	{
		d = b;
	}

	if (c > d)
	{
		d = c;
	}
	return d;
}

/*���غ���
�������ֿ���һ�������Ǳ�����Ŀ����������(int double float bool)��һ���ĺ���
����ֵ��һ���ĺ����޷������ǲ���һ����������Ϊϵͳ�޷��ж�
*/

double function(int var_x)
{
	double result = sqrt(var_x);
	return result;
}

double function(double var_x)
{
	double result = sqrt(var_x);
	return result;

}
/* function 3 is exactly same to function 2
int function3(double var_y)
{
	double result9 = sqrt(var_y);
	return result9;
}
*/
double function(double x, double y,double z)
{
	double result = sqrt(abs((x + y) / (x - y)+z));
	return result;

}
// System will judge to use which functions by judging the number and types of variables


// �ݹ麯�� f(x)=f(x-1)+g(x)
void demo_print(int num, int a )
{
	if (num > 20)
	{
		return;
	}
	if (a % 2 == 0)
	{
		cout << num << endl;
		demo_print(num + 1,a);
	}
	if (a % 2 == 1)
	{
		demo_print(num + 1,a);
		cout << num << endl;
	}
}

void Sums(int x)
{
	if (x <= 0)
	{
		return;
	}
	base = base + x;
	Sums(x - 1);
}

int Summ(int x)
{
	if (x == 0)
	{
		return 0 ;
	}
	return Summ(x - 1) + x ;

}

int fabonnacci(int x)
{
	if (x == 0)
	{return 0;}
	if (x == 1)
	{return 1;}
	else
	{
		return fabonnacci(x - 1) + fabonnacci(x - 2);
	}
}




int main()
{
	printf("this file aims to practice functions\n");
	printf("Please type in three values\n");
	double a; double b; double c;
	cin>> a >> b >> c;
	int result=c_max(a,b,c)*c_max(a+b,b,c)/c_max(a,b,b+c);
	cout<< result;
	
	for (int i = 11; i < 100; ++i)
	{
		int v = i /10+ (i %10)*10;
		if(if_prime(v)==true && if_prime(i)==true)
		{
			cout<< i<< endl;
		}
	}

	

		
/*
һ�㺯����Ҫ����main()��ǰ�棬Ҫ��Ȼ��Ҫ��Mainǰ���������� ���ƺ�����һ�У�����; 
                                �йض��ֺ����ڲ�ͬ���ļ�����
include "demo.h" include <cmath>�� in main.cpp
����һ����Ŀ����Ŀ�к��� main.cpp demo.cpp demo.h
main.cppһ������include���ã�demo.cpp��(optional)����include demo.h, demo.cpp��д��ԭ����
demo.h��ֻ��һ�к������� 
����Ŀ�ʺ���һ��bundle���㷨���ʺ���һ���ļ���������Գ���ȽϿ� 
*/	
	
	printf("Please type a random number \n");
	int num;
	cin >> num;
	a = num;
	demo_print(num, a);

	Sums(10);
	cout << base<< endl; 
	printf("There is Summmm results\n");
	cout << Summ(100)<< endl;
	printf("Here is fabonnacci results\n");
	cout << fabonnacci(5-1)<< endl;
	const int alpha = 0; // const usage NEW!
	cout << alpha << endl;
	char ch = 65; // acsii 65,A, char can be equal to ASCII, 0 is 48(ASCII),9 is 57(ASCII)
	cout << ch << endl;
	char chh = '\'';// "\"��ת������
	cout << chh << endl;
	printf("go \t");
	printf("continue \t");
	char al;
	printf("judge if string is a number \n");
	cin >> al;

	if (al >= '0' && al <= '9')
	{
		printf("number\n");
	}
	if (al >= 'A' && al <= 'Z')
	{
		printf("Capital Letter\n");
	}
	if (al >= 'a' && al <= 'z')
	{
		printf("Lower Letter\n");
	}

	return 0;
}
