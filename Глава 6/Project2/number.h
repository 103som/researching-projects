#pragma once
class Number
{
public:
	Number(int num);
	~Number();

public:
	Number operator+(int num);
	Number operator-(int num);
	Number operator/(int num);
	Number operator*(int num);
	Number operator=(int num);
	bool operator==(int num);

	operator int();

	Number &operator++();
	Number operator++(int);
	Number &operator--();
	Number operator--(int);

public:
	void SetNumber(int num);
	int GetNumber();

private:
	int m_Number;
};