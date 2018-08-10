#pragma once
#include <iostream>

class MyMoney
{
public:
	MyMoney(std::string in_Name, double in_Money, double in_Rate, int in_Time);
	~MyMoney();

public:
	double GetFinalMoney() const;
	double GetMoney() const;
	double GetRate() const;
	double GetTime() const;
	std::string GetName() const;

private:
	const std::string m_Name;
	const double m_Money;
	const double m_Rate;
	const int m_Time;
};

std::ostream &operator<<(std::ostream &out, const MyMoney &in_Money);