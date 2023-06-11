//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//void ForEach(const std::vector<int>& values,const std::function<void(int)>& func)
//{
//	for (int value : values)
//		func(value);
//}
//
//int main()
//{
//	
//	// lambda使用基础:只要你有一个函数指针，你就可以在c++中使用lambda表达式
//
//	std::vector<int> values = {1,5,4,2,3};
//	auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 3; });//利用lambda查找静态数组中第一个大于3的数字
//
//	std::cout << *it << std::endl;
//
//	int a = 5;
//	//[]是捕获的意思，获取外部的值，传入lambda方法体内部. =是捕获所有通过引用或者拷贝传入的值; & this 或则和 
//	//[a,&b] a是拷贝,b是引用传递
//	//this 是引用传递
//	//&通过引用
//	auto lambda = [=](int value) {std::cout << "Value:" << a << std::endl; };
//	ForEach(values,lambda);
//	std::cin.get();
//}