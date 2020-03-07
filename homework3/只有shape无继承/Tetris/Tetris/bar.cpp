#include "pch.h"
#include "bar.h"
#include <iostream>


bar::bar()
{
	m_status = 0;
}


bar::~bar()
{
}

void bar::rotate(enum_rotate rotate)
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

void bar::display()
{
	std::cout << "方块的形状是：" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			std::cout << m_shape[m_status][i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}