#include <iostream>
#include <string>

void PrintString(const std::string& string)//传递字符串时候尽量这样，使用引用不产生额外内存。
{
	std::cout << string << std::endl;
}

int main()
{
	//const char* name = "Hzy";
	std::string name = std::string("Hzy") + "hello!";
	const char name2[7] = {'H','z','y', 0}; //string的原理就是数组char  最有一个终止符
	std::cout << name2 << std::endl;
	std::cout << name << std::endl;
	PrintString(name);
	std::cin.get();

}