#include <iostream>

#include "Figure.h"

using namespace std;

void Figure::SetDimension(const double value1)
{
    SetDimension(value1, value1);
}

void Figure::SetDimension(const double value1, const double value2)
{
    m_value1 = value1;
    m_value2 = value2;
}

void Figure::ShowArea() const
{
    cout << "Nuh huh" << endl;
}

void Figure::ShowPer() const
{

}

void Figure::Init()
{
    cout << "Enter first side:" << endl;
    cin >> m_value1;
    cout << "Enter second side:" << endl;
    cin >> m_value2;
}

void Figure::Print()
{
    cout << "Area:" << endl;
    ShowArea();
    cout << "Length:" << endl;
    ShowLength();
}

void Figure::ShowLength()
{
    cout << "Nuh huh" << endl;
}