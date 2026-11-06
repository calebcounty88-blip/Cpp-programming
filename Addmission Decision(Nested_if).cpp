#include <iostream>
using namespace std;
int main()
{
	string student_name;
	float exam_score;
	int age;
	cout<<"Enter Student Name"<<student_name<<endl;
	cin>>student_name;
	cout<<"Enter Exam Score"<<exam_score<<endl;
	cin>>exam_score;
	cout<<"Enter Age"<<age<<endl;
	cin>>age;
	if (age >=18)
	{
		 if(exam_score>=50)
		 {
		 	cout<<"Addmitted"<<endl;
		 }
		 else
		 {
			 cout<<"Not Addmitted:Low Score"<<endl;
		 }
	}
	
	else
		{
			cout<<"Not Addmitted:Underage"<<endl;
		}
	return 0;
}