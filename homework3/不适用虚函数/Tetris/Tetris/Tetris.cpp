// Tetris.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "LShapre.h"
#include "bar.h"
#include "square.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
	// 测试LShape类
	LShape *curr_l = new LShape();
	curr_l->move(enum_move::right);
	curr_l->down();
	curr_l->changeColor(enum_color::green);
	curr_l->display();
	curr_l->rotate(enum_rotate::clockwise);
	curr_l->display();
	delete curr_l;
	curr_l = nullptr;

	// 测试bar类
	bar *curr_b = new bar();
	curr_b->move(enum_move::right);
	curr_b->down();
	curr_b->changeColor(enum_color::green);
	curr_b->display();
	curr_b->rotate(enum_rotate::clockwise);
	curr_b->display();
	delete curr_b;
	curr_b = nullptr;

	// 测试square类
	square *curr_s = new square();
	curr_s->move(enum_move::right);
	curr_s->down();
	curr_s->changeColor(enum_color::green);
	curr_s->display();
	curr_s->rotate(enum_rotate::clockwise);
	curr_s->display();
	delete curr_s;
	curr_s = nullptr;

	system("pause");
	return 0;
}

