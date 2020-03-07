// Tetris.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "Shape.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
	// 测试LShape类
	Shape *curr = new Shape(enum_type::shape_L);
	curr->move(enum_move::right);
	curr->down();
	curr->changeColor(enum_color::green);
	curr->display();
	curr->rotate(enum_rotate::clockwise);
	curr->display();
	delete curr;
	curr = nullptr;

	// 测试bar类
	curr = new Shape(enum_type::shape_bar);
	curr->move(enum_move::right);
	curr->down();
	curr->changeColor(enum_color::green);
	curr->display();
	curr->rotate(enum_rotate::clockwise);
	curr->display();
	delete curr;
	curr = nullptr;

	// 测试square类
	curr = new Shape(enum_type::shape_O);
	curr->move(enum_move::right);
	curr->down();
	curr->changeColor(enum_color::green);
	curr->display();
	curr->rotate(enum_rotate::clockwise);
	curr->display();
	delete curr;
	curr = nullptr;

	system("pause");
	return 0;
}

