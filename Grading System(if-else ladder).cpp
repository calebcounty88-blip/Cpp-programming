#include <iostream>
using namespace std;
int main()
{
	string student_name,results;
	float exam_marks;
	char grade;
	cout<<"Enter Student_Name"<<endl;
	cin>>student_name;
	cout<<"Enter Exam_Marks"<<endl;
	cin>>exam_marks;
	if(exam_marks>=70&&exam_marks<=100)
	{
		grade ='A';
	}
	else if(exam_marks>=60&&exam_marks<70)
	{
		grade='B';
	}
	else if(exam_marks>=50&&exam_marks<60)
	{
		grade='C';
	}	
	else if(exam_marks>=40&&exam_marks<50)
	{
		grade='D';
	}
	else
		{
		grade='E';
	}
	
cout<<"================="<<endl;
cout<<"STUDENT HANDOUT"<<endl;
cout<<"================="<<endl;

cout<<"Student Name: "<<student_name<<endl;
cout<<"Marks: "<<exam_marks<<endl;
cout<<"Grade: "<<grade<<endl;
return 0;
}