#include <iostream>
#include "arrayClass.h"
using namespace std;

void arrayClass::showArray() //how to display all the objects in our array 
{
	int i;
	for (i = 0; i < size; i++)
	{
		cout << trackerArray[i];
		cout << endl << endl;
	}
	system("pause");
}

arrayClass::arrayClass()
{
	size = 0;
}

bool arrayClass::checkArray(string n, string t) //we use a boolean to check if an object is already in the array 
{
	int i;
	for (i = 0; i < size; i++)//we use a loop to interate through the array and check if the input is repeated 
	{
		if (trackerArray[i].inputDate() == n && trackerArray[i].inputLocation() == t)// we just use date and location of the run to check if there is a repeat
																					 // we only want to run once a day and have multiple different
																					 // locations for our run
		{
			return true; 
		}
	}
	return false;
}

int arrayClass::addfavoriteThingClass(favoriteThingClass &item) //here we use an overaload construction to add the object of our run tracker into the array 
																//while also in another cpp file we use it display our run tracker requirements
{
	trackerArray[size] = item;
	if (size < 99)//adds a new object to the array as long as it isn't full 
	{
		size++;
		return 0;
	}
	else
	{
		cout << "Maximum amount of inputs reached." << endl;
		return MAX;
	}
}

