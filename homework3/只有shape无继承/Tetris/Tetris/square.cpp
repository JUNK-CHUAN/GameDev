#include "pch.h"
#include "square.h"
#include <iostream>


square::square()
{
}


square::~square()
{
}

void square::rotate(enum_rotate rotate)
{
	return;
}

void square::display()
{
	std::cout << "方块的形状是：" << std::endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << m_shape[m_status][i][j];
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
