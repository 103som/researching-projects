#pragma once
class Parallelepiped
{
public:
	Parallelepiped(double width, double depth, double height);
	~Parallelepiped();

public:
	double GetVolume();

	double GetWidth();
	void SetWidth(double width);

	double GetDepth();
	void SetDepth(double depth);

	double GetHeight();
	void SetHeight(double height);

	Parallelepiped operator+(Parallelepiped right);

private:
	double m_Width;
	double m_Depth;
	double m_Height;
};

