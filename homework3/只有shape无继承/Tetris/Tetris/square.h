#pragma once

#include "define.h"


class square
{
public:
	square();
	~square();
	// ���εķ�ת
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

