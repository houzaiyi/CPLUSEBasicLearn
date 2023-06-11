//#include <iostream>
//
////等号左边是左值，右边是又值。  左值是有某种存储支持的变量，右值是临时值
//// const std::string name 兼备支持左右值
//void PrintName(std::string& name)//仅支持左值
//{
//	std::cout << "[lvalue]" << name << std::endl;
//}
//void PrintName(std::string&& name)//仅支持右值
//{
//	std::cout << "[lvalue]" << name << std::endl;
//}
//int main()
//{
//	std::string firstName = "aa";
//	std::string lastName = "hzy";
//	std::string plusName = firstName + lastName;
//
//	PrintName(firstName);//左值
//	PrintName(firstName + lastName);//右值 因为知道这个函数的值只接受临时变量,所以可以做操作 
//}