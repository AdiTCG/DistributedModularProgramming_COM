// MATHDLLSRC.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
using namespace std;
#include "CircleHeader.h"
#include<iostream>
const double MATH_PI = 3.1416;
Circle::Circle()
{
	this->m_dRadius = 0.0;
}

void Circle::SetRadius(double dRadius)
{
	this->m_dRadius = dRadius;

}

double Circle::GetArea()
{
	double dArea = MATH_PI * this->m_dRadius * this->m_dRadius;
	cout << "sjdjfk" << std::endl;
	return(dArea);
}