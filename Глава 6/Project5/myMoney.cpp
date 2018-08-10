#include "myMoney.h"



MyMoney::MyMoney(std::string in_Name, double in_Money, double in_Rate, int in_Time) : m_Name(in_Name), m_Money(in_Money), m_Rate(in_Rate), m_Time(in_Time)
{
}

MyMoney::~MyMoney()
{
}

double MyMoney::GetFinalMoney() const
{
	double s = m_Money;

	for (int i = 0; i < m_Time; i++)
		s *=(1 + m_Rate / 100);

	return s;
}

double MyMoney::GetMoney() const
{
	return m_Money;
}

double MyMoney::GetRate() const
{
	return m_Rate;
}

double MyMoney::GetTime() const
{
	return m_Time;
}

std::string MyMoney::GetName() const
{
	return m_Name;
}

std::ostream &operator<<(std::ostream &out, const MyMoney &in_Money)
{
	out << "���: " << in_Money.GetName().data()
		<< "\n�����: " << in_Money.GetMoney()
		<< "\n������ (%): " << in_Money.GetRate()
		<< "\n������ (���): " << in_Money.GetTime()
		<< "\n�������� �����: " << in_Money.GetFinalMoney();
	
	return out;
}