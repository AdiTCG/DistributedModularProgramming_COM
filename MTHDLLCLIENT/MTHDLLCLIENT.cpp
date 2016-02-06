// MTHDLLCLIENT.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CircleHeader.h"
using namespace std;
#include <iostream>

void main(void)
{
	Circle circle;
	circle.SetRadius(10.0);
	cout << "Area of Circle = " << circle.GetArea() << std::endl;
	system("pause");
}

