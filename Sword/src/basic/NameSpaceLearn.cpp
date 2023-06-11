//#include<iostream>
//#include<string>
//#include<algorithm>
//
////namespace是为了避免命名冲突,是为了能够在不同的上下文中调用到相同的符号
////::就是进入的意思
////为什么不 using namespace std;  而用std::string("hzy");  因为这样可以明显看到用的是标准库的方法,避免出错
//namespace apple {
//
//	void print(const char* text)
//	{
//		std::cout << text << std::endl;
//	}
//}
//
//namespace orange {//区分方法
//	void print(const char* text)
//	{
//		std::string temp = text;
//		std::reverse(temp.begin(),temp.end());
//		std::cout << temp << std::endl;
//	}
//}
//int main()
//{
//	orange::print("hzy");//明确找到这个方法
//	std::cin.get();
//}
//
