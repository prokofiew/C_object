#include<iostream>
using namespace std;

class Animal
{
	public:
	// atributes
	string species;
	string name;
	int age;
	
	//method
	void add_animal()
	{
		cout<<"Adding new animal to db.\n";
		cout<<"Name species:";
		cin>>species;
		cout<<"Add name:";
		cin>>name;
		cout<<"Type age:";
		cin>>age;
	}
	
	void speak()
	{
		if (species=="cat") cout<<name<<", "<<age<<" years old. Miau!";
		else if (species=="goat") cout<<name<<", "<<age<<" years old. Beeee1";
		else if (species=="cow") cout<<name<<", "<<age<<" years pld. Muuuuu!";
		else cout<<"There is no such a species like "<<species;
		
	}
};




int main()
{
	Animal z1;
	z1.add_animal();
	z1.speak();	
	
	Animal z2;
	
	return 0;
}
