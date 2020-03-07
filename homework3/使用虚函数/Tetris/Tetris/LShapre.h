#pragma once
#include "Shape.h"

class LShape :
	public Shape
{
public:
	LShape();
	~LShape();
	void rotate(enum_rotate);
	void display();
private:
	int m_status;
	const int m_shape[4][3][3] = {
		{
			{ 0, 1, 0 },
			{ 0, 1, 0 },
			{ 0, 1, 1 }
		},
		{
			{ 0, 0, 1 },
			{ 1, 1, 1 },
			{ 0, 0, 0 }
		},
		{
			{ 1, 1, 0 },
			{ 0, 1, 0 },
			{ 0, 1, 0 }
		},
		{
			{ 0, 0, 0 },
			{ 1, 1, 1 },
			{ 1, 0, 0 }
		}
	};
};

