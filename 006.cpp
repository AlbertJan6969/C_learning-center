#include <iostream>// cout, cin, endl, boolalpha
#include <cstdio>// printf, scanf
#include <cmath>//pow(x,y) x^y, sqrt(), ceil(),round(),abs()
#include <algorithm>//swap(),max(a,b), min(a,b)
#include<string> // string
#include<cctype>// isdigit, islower, isupper, tolower, toupper


using namespace std;


int main()
{
	string str1="hello";
	string str2="heyheyhey";
	cout<< str1.size()<<endl;
	cout<< str2[2]<< endl;
	str2[2]='+';
	cout<< str2<< endl;
	
	printf("type a sentence\n");
	string strr;
	getline(cin,strr);
	
	int count=0;
	for(int i =0; i < strr.size(); ++i)
	{
		
		if (isdigit(strr[i]))
		{
			count++;
		}
		
		
	}
	
	cout << count << endl;
	
/*
str.size() str.length() str.capacity str.empty() str.clear() str.resize() str.at()
str.at() <===> str[] ,,,at速度慢，但是可以监测是否越界 
push_back(s)末尾增加字符     append(s) 末尾增加字符  insert(p,s) p 为原string位置 
append(s,a,n)添加s,s中的从a开始的第n个字符(n为长度)    append(n,s)向末尾添加n个s 
assign() 重新赋值 assign(n,c)赋值n个c assign(s,p,n) s的从p开始n个字符 
replace() erase()
*/

	
	printf("First string\n");
	string string1="Go-go-Go";
	cout<<string1.size()<< endl;
	cout<<string1.capacity()<<endl;
	printf("Second string\n");
	string1="This";
	cout<<string1.size()<< endl;
	cout<<string1.capacity()<<endl;
	printf("Third string\n");
	string1="This-is-a-new-string-it-googte";
	cout<<string1.size()<< endl;
	cout<<string1.capacity()<<endl;
	
	// push_back(),append(),insert(),assign()
	string sooth="123";
	sooth=sooth+"4";
	cout<< sooth << endl;
	sooth.push_back('5'); // '' instead of ""
	cout<< sooth << endl;
	sooth.append("6");
	cout<< sooth << endl;
	sooth.append(3,'9'); //'' instead of ""
	sooth.append("6OS9",1,2);
	cout<< sooth << endl; 
	
	sooth="changing";
	cout<< sooth << endl;
	sooth.assign("ASADF");
	cout<< sooth << endl;
	sooth.assign(4,'A');
	cout<< sooth << endl;
	sooth="123456";
	sooth.insert(0,"ASDF789789789QWAZ",4,9); // 0插入string首位，4 AS string 第5个字符，长度为9 
	
	// find(), rfind(), ...
	sooth="75469321697893515616546547894546";
	int pos1=sooth.find("7");
	cout<< pos1 << endl;
	int pos2=sooth.find("7",sooth.find("7")+1);
	cout<< pos2 << endl;
	pos1 = sooth.rfind("7");// look from behind
	cout << pos1 << endl;
	pos2 = sooth.find_first_of("057");// find first place of 0 or 5 or 7 in string from beginning
	cout << pos2 << endl;
	pos2 = sooth.find_last_of("057");// find last of = rfind first of 
	cout << pos2 << endl; 
	pos2 = sooth.find_first_not_of("057");// find first palce not of 0 or 5 or 7
	cout << pos2 << endl;
	int pos3=sooth.find("AS");
	cout<< pos3 << endl;

	// comparation in string if same? who is larger?
	str1 = "123546";
	str2 = "123456";
	bool result = str1 == str2;
	cout << result << endl;
	result = str1 >str2;
	cout << result << endl;
	printf("We don't talk anymore\n");
	bool r = 666;// bool r =true
	cout << r << endl;
	cout << boolalpha << r << endl;// 0 false 1 true
	cout << noboolalpha;
	cout << (str1.compare(0, 2, str2) == 0) << endl;// starts from [0] of str1, length=2, compared it to str2
	cout << (str1.compare(0, 2, str2, str2.size() - 3, 2) == 0) << endl;// starts from 3, length=2 of str2
	
	// create a new String
	string Str = str1.substr(2, 2);
	cout << Str << endl;
	Str = str1.substr();// copy str1 to Str
	cout << Str << endl;


	
	printf("type a paragraph, I can help you to find word count\n");
	int arr[1111]={};
	string sttr;
	int Count=0;
	while(cin>>sttr) // it lasts forever, type crtl z to kill the program
	{
		arr[Count] = sttr.size();
		Count=Count+1;
	}
	cout<< arr[0];
	
	for (int j=0; j<Count; ++j)
	{
		cout<<","<<arr[j];
	}
	
	cout<<endl;


	return 0;
/*
									***How to add, copy, compare, and change the strings without 
									using these internal functions.
												The list of function
									Str.size()
									Str.length()
									Str.resize()
									Str.capacity()
									Str.at()     Str[] is better
												

									Str.substr()  NewStr=Str.substr(x,y), starts from x of Str, l=y
									Str.append()
									{
									Str.append('x')=Str.push_back(x)
									Str.append(3,'x') place 'x' in Str[3]
									Str.append('x', y,z) only uses 'x' starts from y, l=z, to add to the last of Str

									}
									Str.assign()
									{
									Str.assign("x"), changes to x completely
									Str.assign(3,"x"), changes to "xxx"
												
									}
												
									Str.insert(x,"t",i, j) x: position of inserting in String; (i,j) cuts the "t"


	
									Str.clear()
									Str.replace()
									Str.empty() if it is empty
									Str.erase()
									Str.compare(x,y,"t", i, j) (x,y) of Str compares to (i,j) of "t"
	

									Str.find("x")							 find first x in Str, return a number
									Str.find("x",pos1+1)             find second x in Str
									Str.rfind()                              find from behind
									Str.find_first_of("x"),           break "x" into pieces, find any element in x
									Str.find_first_not_of()          find every element except elements in x 
									Str.find_last_not_of()           find from behind 
									Str.find_last_of()                  find from behind 
	
*/
}




