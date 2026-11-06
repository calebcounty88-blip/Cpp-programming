#include <iostream>
using namespace std;
int main()
{
	double num1,num2,result;
	char op;
	cout<<"Enter Number 1"<<endl;
	cin>>num1;
	cout<<"Enter operator(+,-,*,/)";
	cin>>op;
	cout<<"Enter Number 2"<<endl;
	cin>>num2;
	switch(op)
	{
		case'+':
			result=num1+num2;
			cout<<"Result="<<num1<<"+"<<num2<<"="<<result<<endl;
			break;
		case'-':
			result=num1-num2;
			cout<<"Result="<<num1<<"-"<<num2<<"="<<result<<endl;
			break;
		case'*':
			result=num1*num2;
			cout<<"Result="<<num1<<"*"<<num2<<"="<<result<<endl;
			break;
		case'/':
			if(num2==0)
			{
			cout<<"error:cannot divide by zero"<<endl;	
			}
	else
	{
	result=num1/num2;
	cout<<"Result="<<num1<<"/"<<num2<<"="<<result<<endl;	
	}
}}
