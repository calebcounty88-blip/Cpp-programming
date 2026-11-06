#include <iostream>
using namespace std;
class Book{
	public:
	string title,author;
	int numberofcopies;
	void inputDetails()
	{
		cout<<"Book title"<<endl;
		cin>>title;
		cout<<"Author"<<endl;
		cin>>author;
		cout<<"Copies available"<<endl;
		cin>>numberofcopies;
		}
		void borrowBook()
		{
			if(numberofcopies>0)
			{
				numberofcopies--;
				cout<<"copies avilable"<<numberofcopies<<endl;
				cout<<"Book borrowed successful"<<endl;
			}
			else
			{
				cout<<"no books avilable to borrow"<<endl;
			}
		}
		void displayDetails()
		{
			cout<<"\n============"<<endl;
			cout<<"Book title: "<<title<<endl;
			cout<<"Author: "<<author<<endl;
			cout<<"Copies Available: "<<numberofcopies<<endl;
			cout<<"\n=========="<<endl;
		}
};
int main()
{
	Book StudentBook;
	StudentBook.inputDetails();
	cout<<"\n====Before Borrowing===="<<endl;
	StudentBook.displayDetails();
	StudentBook.borrowBook();
	cout<<"\n====After Borrowing===="<<endl;
	StudentBook.displayDetails();
	return 0;
}