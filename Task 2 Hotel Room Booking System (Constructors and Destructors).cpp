#include <iostream>
using namespace std;
class RoomBooking{
	private:
		string Guestname;
		string Roomnumber;
		int Numberofdaysbooked;
		public:
			RoomBooking(string name,string Rmnum,int Numdays){
				Guestname=name;
				Roomnumber=Rmnum;
				Numberofdaysbooked=Numdays;
				cout<<"Room booking confirmed"<<endl;
			}
			void displayBooking(){
				cout<<"=====Booking Details=====\n"<<endl;
				cout<<"Guest Name :"<<Guestname<<endl;
				cout<<"Room Number :"<<Roomnumber<<endl;
				cout<<"Number of days booked :"<<Numberofdaysbooked<<endl;
				cout<<"=========================="<<endl;
				
			}
			~RoomBooking(){
				cout<<"Booking ended,room released"<<endl;
			}
};
int main()
{
RoomBooking Booking("John Walker","3B",4);
Booking.displayBooking();	
	return 0;
}