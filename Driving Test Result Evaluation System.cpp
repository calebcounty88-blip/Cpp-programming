#include <iostream>
using namespace std;
int main()
{
	string student_name,test_results;
	float theory_test_marks,practical_test_marks;
	int average_score;
	cout<<"student_name"<<endl;
	cin>>student_name;
	cout<<"theory_test_narks"<<endl;
	cin>>theory_test_marks;
	cout<<"practical_test_marks"<<endl;
	cin>>practical_test_marks;
	
	average_score=(theory_test_marks+practical_test_marks)/2;
	if(average_score>=50)
	{
		test_results="PASS";}
		else
		{
		test_results="FAIL";
	};
	cout<<"\n\n";
	cout<<"===================="<<endl;
	cout<<" STUDENT TEST RESULTS "<<endl;
	cout<<"====================="<<endl;
	
	cout<<"Student_name:"<<student_name<<endl;
	cout<<"Theory_test_Marks:"<<theory_test_marks<<endl;
	cout<<"Practical_test_Marks:"<<practical_test_marks<<endl;
	cout<<"average_scores:"<<average_score<<endl;	
	cout<<"test_results:"<<test_results<<endl;
	
	cout<<"================"<<endl;
	cout<<  "END OF RESULTS" <<endl;
	cout<<"================"<<endl;  
	return 0;
;}