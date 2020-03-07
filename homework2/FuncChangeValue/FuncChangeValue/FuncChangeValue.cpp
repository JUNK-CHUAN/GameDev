// FuncChangeValue.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

// 通过传指针来在函数内部修改函数外的数的值
void changeAtoB(int *A, int *B);
// 通过修改全局变量来在函数内部修改函数外的值
void changeGlobal(int C);


int g_test = 1;

int main()
{
	int m_test = 10;
	std::cout << "m_test = " << m_test << std::endl;
	int changeValue = 20;
	changeAtoB(&m_test, &changeValue);
	std::cout << "m_test after change:" << m_test << std::endl;

	std::cout << "global value g_test:" << g_test << std::endl;
	changeGlobal(15);
    std::cout << "g_test after change:" << g_test << std::endl; 

	return 0;
}

void changeAtoB(int* A, int* B)
{
	*A = *B;
}

void changeGlobal(int C)
{
	g_test = C;
}