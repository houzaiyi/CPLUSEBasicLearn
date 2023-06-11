//#include <iostream>
//#include <string>
//#include<tuple>
//
// //tuple容器(元组), 是表示元组容器, 是不包含任何结构的,快速而低质(粗制滥造, quick and dirty)的, 可以用于函数返回多个返回值;
//std::tuple<std::string, int> CreatePerson()//结构化绑定,返回多个类型
//{
//	return {"hzy",25};
//}
//int main()
//{
//    std::tuple<std::string,int> person = CreatePerson();//原始写法
//	std::string& nameOrang = std::get<0>(person);
//	int ageOrang = std::get<1>(person);
//	auto [name, age] = CreatePerson();//17后的新特性 auto
//	std::cout << nameOrang;
//}