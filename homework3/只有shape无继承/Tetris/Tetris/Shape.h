#pragma once

#include <iostream>
#include "LShapre.h"
#include "square.h"
#include "bar.h"


class point
{
public:
	int x;
	int y;

	point() { x = 0; y = 0; }
	point(int _x, int _y) { x = _x; y = _y; }
	~point() {}
};

class color
{
public:
	int red;
	int green;
	int blue;

	color() { red = 255; green = 0; blue = 0; }
	color(int r, int g, int b) { red = r; green = g; blue = b; }
	~color() {}
};


class Shape
{
public:
	Shape(enum_type);
	virtual ~Shape();
	// 形状的平移
	void move(enum_move);
	// 方块下降
	void down();
	// 改变颜色
	void changeColor(enum_color);
	// 旋转
	void rotate(enum_rotate);
	// 打印形状
	void display();
protected:
	LShape m_LSape;
	bar m_bar;
	square m_square;

	int m_type;
	color m_color;
	point m_place; // left top point
};




