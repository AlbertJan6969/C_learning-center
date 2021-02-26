#include <iostream>// std::cout, std::cin, std::endl, std::boolalpha
#include <cstdio>
#include <cmath>//std::pow(x,y) x^y, std::sqrt()
#pragma warning(disable : 4996) // only used for VS for scanf()
// Hello everyone
/*
long explanations
hi hi hi 
*/

// using namespace std;  We can use cin cout without std::cin std::cout

int main() {
	;// This is called one Sentence! Every sentence has to end with ;
	
	printf("                          This is the START of C++ \n");
	std::cout << "Hello World!" << std::endl; // std::endl services to switch to a new line, end=""
	
	int number=0;
	number = 666;
	std::cout << "The first number is " << number <<std::endl;
	number = 696;
	std::cout << "The second number is " << number <<std::endl;
	
	// Various types of variables
	int Number_small;
	unsigned int Number_small_2; // None Negative 
	long long Number_large;
	unsigned long long Number_large_2;
	float digit1;
	double digit2; // More decimal place than float
	bool High= false;
	char StringA;
	
	/* define variables 
	NOT USE "-" in the name of variables in C++
	1a is an invalid name USE a1 is OK 
	注意变量作用域的问题，一个变量只能在一个花括号内存在，出了括号，系统释放内存， 该变量不存在哦 
	*/
	int input_number1=0;
	int input_number2=0;
	std::cin>> input_number1 >> input_number2;
	int result= input_number1+ input_number2;
	std::cout<< "The sum is ";
	std::cout<< result << std::endl;
	/* Note the input and output in C and C++, recommend to use C language more
	
	before you use scanf, first please define the variable
	\n is used to switch to new line, NOTE it is in the "", especailly after printf
	%d integer %f float number %.2f, approximate to 2 decimal place %s string
	scanf must include &
	when two variables mix together line[53] USE SPACE to differentiate two variables
	
	*/
	printf("                   New way to print in C instead of C ++ \n");
	printf("Saved Value Unknown= %d \n", number);
	float V5= 0.356;
	printf("Float %.2f \n", V5);
	printf("%.3lf \n", V5); // double=lf
	int Sinput;
	scanf("%d", &Sinput);
	printf("%d \n", Sinput);
	int V1;
	int V2;
	scanf("%d%d",&V1,&V2);
	printf("%d %d", V1, V2);
	
	printf("                       \n");
	printf("                       \n");
	printf("                       \n");
	printf("                          We begin to judge bool\n");
	// Remember that 0 is true and 1 is false
	std::cout<< false << std::endl;
	std::cout<< true << std::endl;
	{
	std::cout<<std::boolalpha;
	std::cout<< false << std::endl;
	std::cout<< true << std::endl;
	} 
	bool Judge1=0;// true
	bool Judge2=234;// false, any value except zero is false
	printf("%d \n", Judge1);
	printf("%d \n", Judge2);
	// == != >= <= < > all signs are same to Python
	Judge1 =  9 < 10;
	std::cout<< Judge1<< std::endl;
	/*
	! 取反, &&: and, ||: or 
	For instance
	0 < x < 10 is same to 0 < x && x < 100 
	*/
	Judge1= 4<5;
	std::cout << (!Judge1) << std::endl;
	printf("                       \n");
	printf("                       \n");
	printf("                       \n");
	printf("                          We begin math calculation \n");
	int a = 45;
	int b = 89;
	int c = a / b;// =a/b
	int d = a % b;// reminder of a/b
/*
a = a+20    a+=20
a = a+1     a+=1 
a = a-1     a-=1
a = a*20    a*=20
*/
	double X = std::pow(10,5);
	std::cout << X << std::endl;
	

	
	return 0;
	// NOTE NOTE usage of cout.width() 
}
