//Constructors,Destructors,Encaspulation
#include <iostream>
using namespace std;

class Book{
	//encaspulation
	private:
	string title;
	string authors_name;
	int no_of_copies;
	public:
		Book(string t,string a,int c){
			title=t;
			a=authors_name;
			c=no_of_copies;
			cout<<"Book attributes initiated. "<<endl;
		}
		void display(){
			cout<<"Book Title "<<title<<endl;
			cout<<"Authors Name "<<authors_name<<endl;
			cout<<"No of copies "<<no_of_copies<<endl;
		}
		void borrow(){
			if(no_of_copies>0)
				no_of_copies--;
			
			else
				cout<<"No copies available\n";
			
		}
		void returnBook(){
			no_of_copies++;
			cout<<"Books returned successfully \n";
		}
		//destructor
		~Book(){
			cout<<"Book object(s) destroyed\n";
		}
};
int main(){
    Book b1("C+++ Programming", "Clinton", 5);
    
    
	b1.display();
	cout<<"\n";
	
	b1.borrow();
	b1.borrow();
	b1.display();
	
	cout<<"\n'";
	b1.returnBook();
	b1.display();
	return 0;
}