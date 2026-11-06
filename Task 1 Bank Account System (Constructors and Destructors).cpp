#include <iostream>
using namespace std;
class BankAccount{
	private:
string Accountholdername;
string Accountnumber;
float Accountbalance;
public:
	BankAccount(string name,string accNum,float accbalance){
	Accountholdername=name;
	Accountnumber=accNum;
	Accountbalance=accbalance;
	cout<<"Account successfully created"<<endl;
	}
	void displayAccount(){
		cout<<"====Customer Details====\n"<<endl;
		cout<<"Account Holder :"<<Accountholdername<<endl;
		cout<<"Account Number :"<<Accountnumber<<endl;
		cout<<"Account Balance $"<<Accountbalance<<endl;
		cout<<"================================"<<endl;
	}
	~BankAccount(){
		cout<<"Account closed successfully"<<endl;
	}
};
int main()
{
BankAccount Ownaccount("Caleb County","KRD2345",2358.90);
Ownaccount.displayAccount();	
	return 0;
}

