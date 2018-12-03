#pragma once
#include "favoriteThingClass.h"
class arrayClass
{
private: //declares private member variables of the arrayClass header class
	favoriteThingClass trackerArray[99];
	int size;
public:  //declares constructors and methods used for arrayClass
	arrayClass();
	bool checkArray(string n, string t);
	int addfavoriteThingClass(favoriteThingClass &item);
	void showArray();
};
