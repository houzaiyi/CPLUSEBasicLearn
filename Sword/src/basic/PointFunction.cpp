//#include <iostream>
//#include <vector>
//
//void HelloWorld()
//{
//	std::cout << "Hellow World!" << std::endl;
//}
//
//void PrintValue(int value)
//{
//	std::cout << "Value:" << value << std::endl;
//}
//
//void ForEach(const std::vector<int>& values, void(*func)(int))
//{
//	for (int value : values)
//		func(value);
//}
//
//int main()
//{//用于生产环境使用智能指针，用于学习和了解工作积累，使用原始指针，当然，如果你需要定制的话，也可以使用自己写的智能指针
//
//	typedef void(*HelloWorldFunction)();//指针函数定义，最原始写法
//	HelloWorldFunction function = HelloWorld; 
//
//	//auto function = HelloWorld; // auto的指针函数写法
//	function();
//
//	std::vector<int> values = {1,2,3,4,5,6};
//
//	//ForEach(values,PrintValue);//最原始的方式
//
//	ForEach(values, [](int value) {std::cout << "Value:" << value << std::endl; });//lambda写法,[]是捕捉方式
//	std::cin.get();
//}