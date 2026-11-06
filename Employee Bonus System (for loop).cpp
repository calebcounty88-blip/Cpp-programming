#include <iostream>
using namespace std;
int main()
{
	string name;
	double total_salary,bonus,basic_salary;
	cout<<"=====EMPLOYEE BONUS REPORT======"<<endl;
	for(int i=1;i<=5;++i){
		cout<<"\nEnter Employee Name"<<i<<endl;
		cout<<"Name"<<endl;
		cin>>name;
		cout<<"Basic Salary"<<endl;
		cin>>basic_salary;
		bonus = 0.05*basic_salary;
		total_salary = basic_salary+bonus;
		cout<<"\n==================="<<endl;
		cout<<"Employee: "<<name<<endl;
		cout<<"Basic Salary: "<<basic_salary<<endl;
		cout<<"Bonus: "<<bonus<<endl;
		cout<<"Total Salary: "<<total_salary<<endl;
		
	}
	cout<<"\n======END OF REPORT======"<<endl;
}