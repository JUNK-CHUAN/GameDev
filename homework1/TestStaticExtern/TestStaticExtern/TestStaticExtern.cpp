// TestStaticExtern.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

static int student = 0;
// 静态全局变量
int globalstu;
//全局变量

void changeStudent(int number)
{
	student = number;
	static int parents = 10;
	// 静态局部变量
}

void testglobal()
{
	extern int globalstu;
	std::cout << "globalstu in testglobal is:" << globalstu << std::endl;
	//全局变量在函数内仍起作用
}


class testStatic
{
public:
	static int teacher;
	// 静态成员变量，教师数
	int score;
	// 普通成员变量，平均分

	testStatic(int _score)
	{
		score = _score;
	}

	void changeTeacher(int num)
	{
		teacher = num;
	}
};

int testStatic::teacher = 1;
// 可以理解为所有课程的老师都为1


int main()
{
    std::cout << "Hello World!\n"; 
	changeStudent(10);
	std::cout << student << std::endl;
	//std:cout << parents;
	// 会报错，无法输出，因为不在作用域内

	extern int globalstu;
	// 声明全局变量
	globalstu = 20;
	std::cout << globalstu << std::endl;
	testglobal();

	testStatic test1 = testStatic(80);
	// 第一门课平均分80
	std::cout << test1.score << std::endl;
	std::cout << testStatic::teacher << std::endl;
	testStatic test2 = testStatic(90);
	// 第二门课平均分90
	std::cout << test2.score << std::endl;
	std::cout << testStatic::teacher << std::endl;
	// 但是两门课都是只有一个老师来教
	test2.changeTeacher(2);
	// 每门课增设一位助教
	std::cout << testStatic::teacher << std::endl;

	return 0;
}




