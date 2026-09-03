// September3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;
int main()
{

	int yourAge = 18;

	string hisName;

	string favColor;

	cout << "what is your name" << hisName << "?\n";
	//cin >> hisName;
	getline(cin, hisName);

	cout << "what is your favorite color, " << hisName << "?\n";
	getline(cin, favColor);

	cout << "what is your age, " << hisName << "?\n";
	cin >> yourAge;
	//this will print his name and his age and fav color hopefully
	cout << hisName << " is " << yourAge << " years old.\n";
	cout << "His favorite color is " << favColor << ".\n";
}