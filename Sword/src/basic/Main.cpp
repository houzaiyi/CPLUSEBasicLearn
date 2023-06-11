#include <iostream> //预处理语句,找到iostream文件(头文件)，并把他里面的代码复制进来,相当于引入方法

void Log(const char* message);  //声明函数 ，编译的时候链接器会找到这个声明的方法,找不到就报错

int main()
{
    Log("Hello World");
    std::cin.get();
}