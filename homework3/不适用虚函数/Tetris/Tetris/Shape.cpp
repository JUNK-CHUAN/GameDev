#include "pch.h"
#include "Shape.h"


Shape::Shape()
{
	m_color = color(255, 0, 0);
	m_place = point(0, 0);
}


Shape::~Shape()
{
}

void Shape::move(enum_move move)
{
	if (move == enum_move::left)
	{
		if (m_place.x > 0)
		{
			m_place.x--;
		}
	}
	else
	{
		m_place.x++;
	}
}

void Shape::down()
{
	m_place.y++;
}

void Shape::changeColor(enum_color color)
{
	if (color == enum_color::red)
	{
		m_color.red = 255;
		m_color.green = 0;
		m_color.blue = 0;
	}
	else if (color == enum_color::green)
	{
		m_color.red = 0;
		m_color.green = 255;
		m_color.blue = 0;
	}
	else
	{
		m_color.red = 0;
		m_color.green = 0;
		m_color.blue = 255;
	}
}