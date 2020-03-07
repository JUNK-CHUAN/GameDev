#include "pch.h"
#include "LShapre.h"


LShape::LShape()
{
	m_color = color(255, 0, 0);
	m_place = point(0, 0);
	m_status = 0;
}


LShape::~LShape()
{
}

void LShape::rotate(enum_rotate rotate)
{
	if (rotate == enum_rotate::clockwise)
	{
		m_status = (m_status + 3) % 4;
	}
	else
	{
		m_status = (m_status + 1) % 4;
	}
}

void LShape::display()
{
	std::cout << "方块的形状是：" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << m_shape[m_status][i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}