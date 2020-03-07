#include "pch.h"
#include "Shape.h"


Shape::Shape(enum_type _type)
{
	m_color = color(255, 0, 0);
	m_place = point(0, 0);
	m_type = _type;
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

void Shape::rotate(enum_rotate rotate)
{
	if (m_type == enum_type::shape_L)
	{
		m_LSape.rotate(rotate);
	}
	else if (m_type == enum_type::shape_bar)
	{
		m_bar.rotate(rotate);
	}
	else
	{
		m_square.rotate(rotate);
	}
}

void Shape::display()
{
	if (m_type == enum_type::shape_L)
	{
		m_LSape.display();
	}
	else if (m_type == enum_type::shape_bar)
	{
		m_bar.display();
	}
	else
	{
		m_square.display();
	}
}