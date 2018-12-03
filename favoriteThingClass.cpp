#include "favoriteThingClass.h"

string favoriteThingClass::inputDate() //method to check for the date of the run and refers to when it is called in the main driver 
									   //and will correspond to the arrayClass.cpp file 
{
	return date;
}
//hhhhh
//method used to check for the location of the run

string favoriteThingClass::inputLocation()
{
	return location;
}
favoriteThingClass::favoriteThingClass() //the default constructor and result if no inputs are given, will also allow for no inputs to be entered
{
	date = "";
	location = "";
	dayNight = "";
	minutes = 0;
	type = "";
}

//The constructor that will defines the object that the user will create
favoriteThingClass::favoriteThingClass(string a, string b, string c, int d, string e)
{
	date = a;
	location = b;
	dayNight = c;
	minutes = d;
	type = e;
}

int favoriteThingClass::getfavoriteThingClass() //method used to check the array and pass our 5 variables
{
	cout << "Date: "; //When
	getline(cin, date);
	cout << "Location: "; //Where
	getline(cin, location);
	cout << "Day/Night: "; //Did you run during the day or evening 
	getline(cin, dayNight);
	cout << "Run Time in minutes: "; //In Minutes
	cin >> minutes;
	cin.ignore();
	cin.clear();
	cout << "Run Type: "; // Type of Run- Jog, Medium, Interval Sprints
	getline(cin, type);
	return 0; 
}

ostream & operator<<(ostream &os, const favoriteThingClass &item) //friend function with overload to later display what the user inputs 
{
	os << endl;
	os << "  Date: " << item.date << endl;
	os << "  Location: " << item.location << endl;
	os << "  Day/Night Run: " << item.dayNight << endl;
	os << "  Time: " << item.minutes << endl;
	os << "  Type of Run: " << item.type;
	return os;
}