//#include <iostream>
//#include <string>
//
//static uint32_t s_AllocCOunt = 0;
//
//void* operator new(size_t size)//所有分配空间都会通过这个new操作符
//{
//	s_AllocCOunt++;
//	std::cout << "Allocating" << size << "bytes\n";
//	return malloc(size);
//}
//
//
//
//#define STRING_VIEW 1
//#if STRING_VIEW
//void PrintName(const std::string_view name)//优化版本 使用string_view试图优化
//{
//	std::cout << name << std::endl;
//}
//#else
//void PrintName(const std::string& name)//不优化版本
//{
//	std::cout << name << std::endl;
//}
//#endif
//
//int main()
//{
//	std::string name = "你好 zy";//原始 std::string  中任何小于15字符的字符串都不会导致内存分配,大于15就会分配
//	//const char* name = "你好 zy";// 静态字符串，不会分配new内存
//#if STRING_VIEW
//	std::string_view firstName(name.c_str(), 4);
//	std::string_view lasttName(name.c_str() + 5, 7);
//#else
//	std::string firstName = name.substr(0, 2);//substr会分配内存 分配一次
//	std::string lasttName = name.substr(3, 5);
//#endif
//	
//	PrintName(firstName);
//	PrintName(lasttName);
//	std::cout << "s_AllocCOunt:" << s_AllocCOunt << std::endl;
//	std::cin.get();
//}