#include <iostream>// cout, cin, endl, boolalpha
#include <cstdio>// printf, scanf, sprintf
#include <cmath>//pow(x,y) x^y, sqrt(), ceil(),round(),abs()
#include <algorithm>//swap(),max(a,b), min(a,b), sort()
#include<string> // string
#include<cctype>// isdigit, islower, isupper, tolower, toupper
#include<utility>//pair
#include<functional>// greater, less
#include<cstdlib>// atol atoi atoll atof
#include <vector>
#include<list>
#include<iterator>//advance


using namespace std;

void myswap1(int a, int b)
{
	int temp = b;
	b = a;
	a = temp;
}

void myswap2(int &a, int &b)
{
	int temp = b;
	b = a;
	a = temp;
}

struct Coordinate
{
	int x;
	int y;
	int z;

};// Here is a ;


bool cmp1(int x, int y)
{
	return x < y;  //sort function starts from small to large, also <<<<<
}
bool cmp2(int x, int y)
{
	return x > y; // sort function starts from large to small, also >>>>>
}
int main()
{
	/* calculation in base-2
	0&0=0;   0&1=0;    1&0=0;     1&1=1;   
	x is odd: x & 1 = 1      x is even: x & 1 = 0
	0|0=0£»   0|1=1£»   1|0=1£»    1|1=1£»  
	0^0=0£»   0^1=1£»   1^0=1£»   1^1=0£»   turn every 0 into 1 or 1 into 0 for base-2 number
	(5>>2),(x>>y),(x<<y) shift 5 two units to right 5=(100)_b2 shift two units=1
	(5<<2)=(10100)_b2=20 note not 16
	~ take opposition   00000010   changes to 11111101 int: 32 digits 
	

	*/
	
	cout <<(5>>2)<<endl;
	cout <<(5<<1)<<endl;
	cout <<(5&1)<<endl;
	cout <<(5|1)<<endl;
	cout <<(5^3)<<endl;
	unsigned int num=5;
	unsigned short num2=~num;
	unsigned int num3=~num;
	cout<< num2<<endl;
	cout<< num3<<endl;
	printf("type two numbers \n");
	{
		int a;
		a = 0;
		int b = 0;
		cin >> a >> b;
		double result = (double)a / b;// changes types of data directly by adding (_) before the data
		cout << result;
	}

	
	// switch() function
	int n=1;
	switch(n)
	{
		case 0:
			printf("Not exists \n");
			break;
		case 1:
			{
			printf("Bad Idea \n");
			double lamda= (double) (n*n-(n-2)+sqrt(n)+pow(n,1/3));
			cout<< lamda<< endl;
			break;	
			}

			
		default:
			printf("Good Good \n");
			
			break;
			
	}
	Coordinate 	Po;
	Po.x = 10;
	Po.y = 25;
	Po.z = 52;
	cout << Po.x << endl;
	Po = { 2,5,1 };
	cout << Po.x << endl;

	pair<int,string> Stu;
	Stu.first = 23;
	Stu.second = "Wangdali";
	cout << Stu.first<< endl <<Stu.second << endl;
	//pair<int, string> Coo(0,0);
	//cout << Coo.first << endl;


	int Singapore = 0;
	int &Sig = Singapore;// create a subname, Singapore is exactly same with Sig

	num = 456;
	num2 = 2;
	myswap1(num, num2);
	cout << num << "    " << num2 << endl;
	int num4 = 456;
	int num5= 2;
	myswap2(num4, num5);// uses the function with reference name otherwise, a and b can't equal to num 
	cout << num << "    " << num2 << endl;
	
	/*
	sometimes use function with reference name only aims to save memory
	because copy values of transmitted data is more memory-consuming than
	establish new name of the data
	However, int, double, short string is almost the same, don't need to use reference name
	
	Things to note when we use the function with reference name
	if we only want to transmit parameters instead of chaning original variable, use
	const    before &x is better. 
	void test1( const int &a)
	{
	}

	*/
	int arr[] = { 5,29,100,5698,0 };// we can't find the number of array by using .size() or sizeof()
	// VERY USEFUL  REMEMBERIT!!!!!!
	num = sizeof(arr) / sizeof(arr[0]);
	// VERY USEFUL  REMEMBERIT!!!!!!
	cout << num << endl;

	for (int i = 0; i < num; ++i)
	{
		printf("%d\t", i+1);
	}
	cout << endl;

	for (int i = 0; i < num; ++i)
	{
		cout<< arr[i]<<"	";
	}
	cout << endl;
	sort(arr, arr + 5);// list name + position in list (arr,arr+x) starts from beginning ,length= x
	// it differs from arr[i], arr+0, arr+4, length=4
	// arr+4, arr+8, position[4] to [7]
	// sort function starts from small to large
	for (int i = 0; i < num; ++i)
	{
		printf("%d\t", i+1);
	}
	cout << endl;
	for (int i = 0; i < num; ++i)
	{
		cout << arr[i] << "	";
	}
	cout << endl;
	sort(arr, arr + 5, cmp2);//cmp2<===>greater<int>(), default sort==cmp1==less<int>()
	for (int i = 0; i < num; ++i)
	{
		printf("%d\t", i + 1);
	}
	cout << endl;
	for (int i = 0; i < num; ++i)
	{
		cout << arr[i] << "	";
	}
	cout << endl;

	cout << &num << endl;
	//compass
	printf("Here let's test memory address");
	{
		int xyz56 = 56;
		int* p = &xyz56;
		*p = 892;
		int alphap;
		p = &alphap;
		int* p2 = NULL;

		int Va = 233;
		cout << Va << endl;
		cout << &Va << endl;
		cout << *(&Va) << endl;
	
	}
	{
		printf("further pointer practice begins");
		int number1=452;
		int number2 = 404;
		int* const pointer = &number1;
		//pointer=& number 2, can't make it due to const
		*pointer = 666; // we can change the content at this position
		cout << *pointer << endl;
		cout << pointer << endl;
		// const int* const pointer =&x, Second C: const memory position First C: content of position
	}

	cout << atoi("4569") - 4000 << endl;
	cout << atoi("abc56") << endl;
	printf("More related to string\n");
	{
		int a = 1024;
		double b = 666;
		long long c = 354;

		string str;
		char ztr[1000] = {};
		int wtr[1000] = {};
		sprintf_s(ztr, "%d", a);// sprintf can't output to a string 
		cout << ztr << endl;
		cout << ztr << endl;

	}

	return 0;
}
