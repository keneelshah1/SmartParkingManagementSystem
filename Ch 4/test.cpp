#include <iostream>
#include <iomanip>
using namespace std;

class details
{
	string name;
	int age;
	float weight;
	public:
	void get()
	{
		cout<<"Enter name of the person: " << endl;
		cin >> name;
		cout<<"Enter age: " << endl;
		cin>>age;
		cout<<"Enter weight: " << endl;
		cin>>weight;
	}

	void print()
	{
		cout << left << setw(10) << name << right << setw(10) << age << setw(10) << weight << endl;
	}
};

int main()
{
	details d[10];
	for(int i=0;i<10;i++)
	{
		d[i].get();
	}
	cout << left << setw(10) << "name" << right << setw(10) << "age" << setw(10) << "weight" << endl;
	for(int i=0;i<10;i++)
	{
		d[i].print();
	}
}