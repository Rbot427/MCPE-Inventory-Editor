// Classes Are Classy.cpp : main project file.
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

using namespace System;
class rectangle
{
public:
	float width, height;
	float area();
};//have to put this here
float rectangle::area()
{
	float answer; 
	answer = width * height;
	return answer;
}


int main()
{
	rectangle rect1;
	float area;
    cout << "Hello There! I am Mr. Wrinkles! Do you want to find \n";
	cout << "The area of a rectangle? \n";
	cout << "Well, you have no choice! HAHAHAHHAHAAHHAHAHAHAH \n";
	system("Pause");
	system("cls");
	cout << "Okay, so what is the width? \n";
	cin >> rect1.width; 
	system("cls");
	cout << "Okay, now what is the height? \n";
	cin >> rect1.height;
	area = rect1.area();
	system("cls");
	cout << "The area is... ";
	cout << area;
	cout << "\n";
	system("Pause");
	return 0; 
}
