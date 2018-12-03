#include <iostream>
#include <string>
#include "favoriteThingClass.h" //the headers that we refer to in the program our lines will not work if we don't call them early on 
#include "arrayClass.h"
using namespace std;

void welcomeMessage();

int main()
{
	//initialize all our data types for our variables
	char input;
	int minutes = 0; //initialize our integer variable
	string date;
	string location;
	string dayNight;
	string type;
	arrayClass array; //creating the list for the program
	favoriteThingClass thing; //can use this to add an item to the empty list before the loop if I want
	favoriteThingClass getinput;
	welcomeMessage();

	do
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

		
		if (array.checkArray(date, location) == true) //where the magic happens for checking if an input is repeated and references the arrayclass
		{
			cout << "You've already tracked this run!" << endl;
		}
		else //else our 5 variables are stored in the arrayclass and print via loop 
			// with  the favoriteThingClass friend operator and overload constructor format
		{
			favoriteThingClass thing(date, location, dayNight, minutes, type);
			array.addfavoriteThingClass(thing);
		}

		//User can continuously add more inputs in the tracker until they decide to hit any other value besides y || Y
		cout << endl << "Would you like to add another run?";
		cin >> input;
		cin.ignore();
		cin.clear();

	} while (input == 'Y' || input == 'y');
	//displays what the user inputted
	array.showArray();

	return 0;
}

//Message to user to input running information 
void welcomeMessage()
{
	cout << "  Welcome to the Run Tracker! " << endl;
	cout << "  This program will store all your runs." << endl;
	cout << "  Please input the date, location, day/night run, run time in minutes," << endl;
	cout << "  And type of run: jog, medium, or interval sprints." << endl;
	cout << endl;
}

