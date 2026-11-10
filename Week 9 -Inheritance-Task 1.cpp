#include <iostream>
#include <string>

using namespace std;

class Person{
	protected:
		string Name;
		int Age;
		public:
			Person(string n,int a){
				Name=n;
				Age=a;
			}
			
			void displayPerson(){
				cout<<"Name:"<<Name<<endl;
				cout<<"Age:"<<Age<<endl;
			}
};
class Student:public Person{
	private:
	int Admissionnumber;
	double Class;
	public:
		Student(string n,int a,int Ad,double Cl):Person(n,a){
			Admissionnumber=Ad;
			Class=Cl;
		}
		void displayStudent(){
			cout<<"=====Student Details=====\n"<<endl;
			cout<<"Name:"<<Name<<endl;
			cout<<"Age:"<<Age<<endl;
			cout<<"Admission Number:"<<Admissionnumber<<endl;
			cout<<"Class:"<<Class<<endl;
		}
};

int main()
{
	Student student1("Jotham",23,2250,4);
	student1.displayStudent();
	
	return 0;
};