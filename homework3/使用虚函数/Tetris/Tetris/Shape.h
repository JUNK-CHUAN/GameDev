#pragma once

#include <iostream>


enum enum_color
{
	red, green, yellow
};

enum enum_move
{
	left, right
};

enum enum_rotate
{
	clockwise, anticlockwise
};



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
	Shape();
	virtual ~Shape();
	// 形状的平移
	void move(enum_move);
	// 方块下降
	void down();
	// 改变颜色
	void changeColor(enum_color);
	// 旋转接口
	virtual void rotate(enum_rotate) = 0;
	virtual void display() = 0;
protected:
	color m_color;
	point m_place; // left top point
};




