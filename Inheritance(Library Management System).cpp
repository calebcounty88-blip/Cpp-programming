#include <iostream>
#include <string>

using namespace std;

class Person
{
	
protected:
string name;
	
public:
Person(string n){
	name=n;
}	
void setName(string n){
	name=n;
}
string getName(){
	return name;
}
};

class LibraryMember:public Person{
	private:
		int memberID;
		int booksBorrowed;
		
		public:
			LibraryMember(string n,int id,int books):Person(n){
				memberID=id;
				booksBorrowed=books;
			}
			int getMemberID(){
				return memberID;
			}
			int getBooksBorrowed(){
				return booksBorrowed;
			}
};
class PremiumMember:public LibraryMember
{
private:
	double membershipFee;
	
public:
	PremiumMember(string n,int id,int books,double fee):LibraryMember(n,id,books){
		membershipFee=fee;
	}
	double getMembershipFee(){
	return membershipFee;	
	}
	void displayDetails(){
		cout<<"Person Name:"<<getName()<<endl;
		cout<<"Member ID:"<<getMemberID()<<endl;
		cout<<"Books Borrowed:"<<getBooksBorrowed()<<endl;
		cout<<"Membership fee:"<<getMembershipFee()<<endl;
	}
};

int main()
{
	PremiumMember member1("Peterson",1036,12,2000);
	member1.displayDetails();
	
	return 0;
};