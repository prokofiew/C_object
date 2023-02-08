#include<iostream>

using namespace std;

class Auto
{
	public:
	string brand;
	string model;
	int year;
	int mileage;
	
	void add_car()
	{
		cout<<"Insert new car to database.\n";
		cout<<"Enter car brand: ";
		cin>>brand;
		cout<<"Enter car model: ";
		cin>>model;
		cout<<"Enter year the car was produced: ";
		cin>>year;
		cout<<"Enter car mileage: ";
		cin>>mileage;
			
	}
	
	void car_display()
	{
		if (brand != "") cout<<"Entered car:"<<brand<<" - "<<model<<"\nProduced in: "<<year<<" with mileage: "<<mileage<<"km";
	}
	
	
};



int main()
{
	Auto s1;
	s1.add_car();
	s1.car_display();
	
	return 0;
}
