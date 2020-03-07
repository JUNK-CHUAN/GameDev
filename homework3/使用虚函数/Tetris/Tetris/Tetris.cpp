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
	Shape *curr = new LShape();
	curr->move(enum_move::right);
	curr->down();
	curr->changeColor(enum_color::green);
	curr->display();
	curr->rotate(enum_rotate::clockwise);
	curr->display();
	delete curr;
	curr = nullptr;

	// 测试bar类
	curr = new bar();
	curr->move(enum_move::right);
	curr->down();
	curr->changeColor(enum_color::green);
	curr->display();
	curr->rotate(enum_rotate::clockwise);
	curr->display();
	delete curr;
	curr = nullptr;

	// 测试square类
	curr = new square();
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

