#include "parallelepiped.h"



Parallelepiped::Parallelepiped(double width, double depth, double height)
{
	m_Width = width;
	m_Depth = depth;
	m_Height = height;
}


Parallelepiped::~Parallelepiped()
{
}

double Parallelepiped::GetVolume()
{
	return m_Width * m_Depth * m_Height;
}

double Parallelepiped::GetWidth()
{
	return m_Width;
}

void Parallelepiped::SetWidth(double width)
{
	m_Width = width;
}

double Parallelepiped::GetDepth()
{
	return m_Depth;
}

void Parallelepiped::SetDepth(double depth)
{
	m_Depth = depth;
}

double Parallelepiped::GetHeight()
{
	return m_Height;
}

void Parallelepiped::SetHeight(double height)
{
	m_Height = height;
}

Parallelepiped Parallelepiped::operator+(Parallelepiped right)
{
	Parallelepiped parallelepiped(GetWidth() + right.GetWidth(), GetDepth() + right.GetDepth(), GetHeight() + right.GetHeight());
	return parallelepiped;
}
