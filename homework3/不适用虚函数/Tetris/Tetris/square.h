#pragma once
#include "Shape.h"


class square :
	public Shape
{
public:
	square();
	~square();
	// 方形的翻转
	void rotate(enum_rotate);
	void display();
private:
	const int m_status = 0;
	const int m_shape[1][2][2] = {
		{
			{ 1, 1 },
			{ 1, 1 }
		}
	};
};

