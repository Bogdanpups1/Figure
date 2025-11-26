#include <iostream>

#include "Circle.h"

using namespace std;

void Circle::ShowArea() const
{
    cout << "S: " << 3.14 * m_value1 * m_value1 << endl;
}

void Circle::ShowPer() const
{
    cout << "P: " << 2 * 3.14 * m_value1 << endl;
}

void Circle::Init()
{
    cout << "Enter radius: ";
    cin >> m_value1;
}

void Circle::Print()
{
    cout << "Area:" << endl;
    ShowArea();
    cout << "Length:" << endl;
    ShowLength();
}

void Circle::ShowLength()
{
    cout << 2 * 3.14 * m_value1 << endl;
}