#include <iostream>
#include <string>

using namespace std;

class Customer
{

protected:
string name;	
public:
	Customer(string n){
		name=n;
	}
	void setName(string n){
		name=n;
	}
	string getName(){
		return name;
	}
	
};
class Loan:public Customer{
	private:
		double loanAmount;
		double interestRate;
		public:
			Loan(string n,double loan,double rate):Customer(n){
				loanAmount=loan;
				interestRate=rate;
			}
			double getLoanAmount(){
				return loanAmount;
			}
			double getInterestRate(){
				return interestRate;
			}
};
class HomeLoan: public Loan{
	private:
		double propertyValue;
		
		public:
		HomeLoan(string n,double loan,double rate,double value):Loan(n,loan,rate){
			propertyValue=value;
		}
			double getPropertyValue(){
				return propertyValue;
			}
void displayDetails(){
	cout<<"Customer Name:"<<getName()<<endl;
	cout<<"Loan Amount:"<<getLoanAmount()<<endl;
	cout<<"Interest Rate:"<<getInterestRate()<<endl;
	cout<<"Property Value:"<<getPropertyValue()<<endl;
}
};

int main()
{
HomeLoan customer1("Jaredlee",500000,15,2000000);
customer1.displayDetails();
	
	return 0;
};