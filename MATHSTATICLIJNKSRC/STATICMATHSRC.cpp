// stdafx.cpp : source file that includes just the standard includes
// MATHSTATICLIJNKSRC.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file

#include "CircleHeader.h"
using namespace std;
#include <iostream>

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
	cout << "Some other change" << endl;
	return(dArea);
}
