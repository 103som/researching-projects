#include "number.h"

Number::Number(int num) : m_Number(num)
{
}

Number::~Number()
{
}

Number Number::operator+(int num)
{
	return m_Number + num;
}

Number Number::operator-(int num)
{
	return m_Number - num;
}

Number Number::operator/(int num)
{
	return m_Number / num;
}

Number Number::operator*(int num)
{
	return m_Number * num;
}

Number Number::operator=(int num)
{
	m_Number = num;
	return m_Number;
}

bool Number::operator==(int num)
{
	return (m_Number == num);
}

void Number::SetNumber(int num)
{
	m_Number = num;
}

int Number::GetNumber()
{
	return m_Number;
}

Number::operator int()
{
	return m_Number;
}

Number &Number::operator++()
{
	m_Number+= 1;
	return *this;
}

Number Number::operator++(int)
{
	Number copy = m_Number;
	m_Number+= 1;
	return copy;
}

Number &Number::operator--()
{
	m_Number-= 1;
	return *this;
}

Number Number::operator--(int)
{
	int copy = m_Number;
	m_Number-= 1;
	return copy;
}