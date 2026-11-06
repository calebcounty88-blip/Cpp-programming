#include <iostream>
using namespace std;
class Employee{
	private:
		string Employee_name,Employee_ID;
		float Basic_salary;
		public:
			void setEmployeeDetails(){
				cout<<"Enter Employee Name"<<endl;
				cin>>Employee_name;
				cout<<"Enter Employee ID"<<endl;
				cin>>Employee_ID;
				cout<<"Enter Basic salary"<<endl;
				cin>>Basic_salary;
			}
		double calculateSalary(){
			float Net_salary;
			Net_salary=Basic_salary+(0.10*Basic_salary);
            return Net_salary;
		}
		void displayEmployeeDetails(){
			cout<<"=========== Employee Outcome ==========\n"<<endl;
			cout<<"Employee Name :"<<Employee_name<<endl;
			cout<<"Employee ID :"<<Employee_ID<<endl;
			cout<<"Basic salary $"<<Basic_salary<<endl;
			cout<<"Net salary $"<<calculateSalary()<<endl;
			cout<<"\n========END========"<<endl;
		}
};
int main(){
	Employee Employee1;
	Employee1.setEmployeeDetails();
	Employee1.displayEmployeeDetails();
	return 0;
}