#include <iostream>
using namespace std;
#include "rhombus.h"

void rhombus::SetDim(double height, double value)
{
	Figure::SetDimension(value, value);
	h = height;
}

void rhombus::ShowArea() const
{
	cout << "Square of rhombus: " << m_value1 * h << endl;
}

void rhombus::Init()
{
	cout << "Enter side: " << endl;
	cin >> m_value1;
	cout << "Enter height: " << endl;
	cin >> h;
}

void rhombus::Print()
{
	cout << "Area:" << endl;
	ShowArea();
	cout << "Length:" << endl;
	ShowLength();
}

void rhombus::ShowLength()
{
	cout << m_value1 << endl;
}