#include <iostream>// std::cout, std::cin, std::endl, std::boolalpha
#include <cstdio>
#include <cmath>//std::pow(x,y) x^y, std::sqrt()

using namespace std;
int main()
{
	
	int score;
	printf("Enter Your Score\n");
	cin >> score;
	if (score > 90)
	{
		printf("Good Score, Excellent\n");
	}
	else if (score<=90 && score > 80)
	{
		printf("OK, Keep Going\n");
	}
	else if (score<= 80 && score >= 60)
	{
		printf("Not good Not Bad\n");
	}
	else
	{
		printf("Sooo bad\n");
	}
	
	/*
	for requires three conditions for(x; y ; z), x is the variable, y is the condition, z self-mechanism
	y is necessary in for clauses
	x and z don't need to have       for (; y ;) is also OK
	In Python, x and z all is outside the for() mechanism is the last line of for clause and 
	x should put before for
	BUT remember the x in for clause(x; y;) is only available in for {}, it doesn't exist outside
	
	
	*/
	for (int x = 0 ; x< 9; x=x+2)
	{
		cout<< x << endl;
	}
	int i = 0 ;
	
	for ( ;i<5 ; i=i+1)
	{

		printf("Hi \n");
	}

	
	for (;i<=5;)
	{
		cout<< i << endl;
		i=i+1;
		printf("go\n");
	}
	printf("Now let's do a math problem \n");
	int sum;
	
	for (int j=0; j<=15; j=j+1)
	{
		sum=sum+j;
	}
	cout<< sum << endl;
	
	
	int num;
	num=10;
	while(num==10) // Be aware for this problem "==" is not "="
	{

		num=45;
		cout << "Num is " << num << endl;
		printf("GO\n");
		num=90;
	}
	/*
	In C++, for is better than while, we use for more frequently than while clause
	for clause only needs a temportary variable and while needs a permanent variable
	for can do all thing in while
	                                    Compare with Python
	for is more complex than Python
	for(C++)=while(C++)=while(Python)>> for (Python)
	但是C++ For语句过于笨拙， 对于最简单的基本次数反而写起来要复杂 
	*/
	
	// 同样是循环10次
	// for x in range (0,10):
	for  (int s=1; s<=10; ++s)
	{
		cout<< s << endl; 
		;
	}
	
	int j=1;
	while (j<=10)
	{
		;
		cout << j <<endl;
		++j;
	}
	
	printf("We begin to do math again");
	
	int v;
	cin>> v;
	
	int Sum=0;
	
	
	for (int b=1; b<=v; ++b)
	{
			int v1s=1; // very important, should put between first for and second for 
			for (int c=1; c<=b; ++c)
			v1s=v1s*c;
		
		Sum=Sum+v1s;
		
	}
	cout<< Sum;
	return 0;
}
