#pragma once

class Figure
{
protected:

    double m_value1;
    double m_value2;

public:

    void SetDimension(const double value1);
    void SetDimension(const double value1, const double value2);
    virtual void ShowArea() const = 0;
    virtual void ShowPer() const = 0;
    virtual void Init() const = 0;
    void Print();
    virtual void ShowLength() const = 0;
};
