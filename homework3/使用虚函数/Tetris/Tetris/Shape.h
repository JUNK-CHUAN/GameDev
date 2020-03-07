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
	// ��״��ƽ��
	void move(enum_move);
	// �����½�
	void down();
	// �ı���ɫ
	void changeColor(enum_color);
	// ��ת�ӿ�
	virtual void rotate(enum_rotate) = 0;
	virtual void display() = 0;
protected:
	color m_color;
	point m_place; // left top point
};




