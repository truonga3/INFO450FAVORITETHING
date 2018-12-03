#pragma once
#include <iostream>
#include <string>
using namespace std;
const int MAX = 999; //constant variable
class favoriteThingClass
{
	
private: //private variables that encapsulates the rest of the program in conjuction with the arrayClass header
	string date;
	string location;
	string dayNight;
	int minutes;
	string type;

public:
	favoriteThingClass(); //Default constructor
	favoriteThingClass(string a, string b, string c, int d, string e); //main constructor for what the user inputs
	friend ostream & operator<<(ostream &os, const favoriteThingClass &item); //friend function with overload for displaying and adding to our array
	int getfavoriteThingClass();
	string inputDate();   //as well as how we initialize our methods that we use later in the program
	string inputLocation();
};
