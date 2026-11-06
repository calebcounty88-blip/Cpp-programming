#include <iostream>//cout,cin
using namespace std;
int main()
{
	string customer_name,phone_model;
	float phone_price,total_sales;
	int quantity;
	cout<<"enter Customer_name:"<<endl;
	cin>>customer_name;
	cout<<"enter phone_model:"<<endl;
	cin>>phone_model;
	cout<<"enter quantity purchased:"<<endl;
	cin>>quantity;
	cout<<"enter price per phone:"<<endl;
	cin>>phone_price;
	total_sales=quantity*phone_price;
	
	cout<<"SALES RECEIPT"<<endl;
	
	cout<<"==============="<<endl;
	
	cout<<"customer name:"<<customer_name<<endl;
	cout<<"phone model:"<<phone_model<<endl;
	cout<<"quantity:"<<quantity<<endl;
	cout<<"price per phone:"<<endl;
	cout<<"TOTAL_SALES:"<<total_sales<<endl;
	cout<<"==============="<<endl;
	
}
