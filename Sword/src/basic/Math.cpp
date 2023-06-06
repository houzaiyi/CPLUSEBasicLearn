#include <iostream>
#include "Log.h"

static int	Multiply(int a, int b)
{
	Log("Multiply");
	return a * b;
}
//这是因为我们没有开始调试  当我们进入debug模式，在调试窗口有内存选项,可以看内存信息
int main()
{
	std::cout << Multiply(5, 6) << std::endl;
	std::cin.get();
}