//#include <iostream>
//#include <string>
//#include<stdlib.h>
//
//void PrintString(const std::string& string)//传递字符串时候尽量这样，使用引用不产生额外内存。
//{
//	std::cout << string << std::endl;
//}
//
//int main()
//{
//	using namespace std::string_literals;
//	"hzy"; //字符串字面量
//	//const char* name = "Hzy";
//	std::string name = std::string("Hzy") + "hello!";
//	std::u32string name0 = U"Hzy"s + U" hello!"; //可以直接用 s 来进行拼接string
//	const char name2[7] = {'H','z','y', 0}; //string的原理就是数组char  最有一个终止符
//
//	const char* example = R"(Line1
//line2
//line3
//)";//拼接string R是忽略转义字符
//
//	const char* ex = "Line1\n"
//		"line2\n"
//		"line3";//拼接string
//	std::cout << name2 << std::endl;
//	std::cout << name << std::endl;
//	PrintString(name);
//	std::cin.get();
//
//}