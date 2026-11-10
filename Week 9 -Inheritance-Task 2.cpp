#include <iostream>
#include <string>

using namespace std;

class Vehicle{
	protected:
		string Brand;
		int Yearofmanufacture;
		public:
			Vehicle(string Br,int year){
				Brand=Br;
				Yearofmanufacture=year;
			}
			void displayVehicle(){
				cout<<"\n=====Vehicle Details====="<<endl;
				cout<<"Brand:"<<Brand<<endl;
				cout<<"Year of Manufacture:"<<endl;
			}
};

class Car : public Vehicle{
	private:
		int Numberofdoors;
		double Enginecapacity;
		public:
			Car(string Br,int year,int doors,double capacity):Vehicle(Br,year){
				Numberofdoors=doors;
                Enginecapacity=capacity;
			}
			void displayCar(){
				cout<<"======Car Details======\n"<<endl;
				cout<<"Car Brand:"<<Brand<<endl;
				cout<<"Year of Manufacture:"<<endl;
				cout<<"Number of Doors:"<<endl;
				cout<<"Engine Capacity:"<<endl;
				cout<<"\n=====END====="<<endl;
			}
};

int main()
{
	Car car1("Toyota",2021,4,2000);
	car1.displayCar();
	
	return 0;
}