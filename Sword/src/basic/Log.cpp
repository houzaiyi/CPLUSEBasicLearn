#include <iostream> //预处理语句,找到iostream文件(头文件)，并把他里面的代码复制进来,相当于引入方法
#include "Log.h"

void InitLog()
{
	Log("Initialized Log");
}


void Log(const char* message) {

	std::cout << message << std::endl;
}