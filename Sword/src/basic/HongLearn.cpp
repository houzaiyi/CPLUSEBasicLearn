//#include <iostream>
//#include<string>
//
//
//////*************第一种写法
//////宏的作用:在编译之前,预处理的时候把一些内容替换掉，然后在编译的时候把内容喂给编译器。
////#if _DEBUG == 1//在属性的c++的预处理器中,  在预处理器定义配置是debug,平台是32  定义: _DEBUG=1 日直级别
////#define LOG(x) std::cout << x << std::endl
////#elif defined(_DEBUG)
////#define LOG(x)
////#endif
////
////
////int main()
////{
////	LOG("hi");
////	std::cin.get();
////}
//
////****************第二种写法 换行写法 反斜杠后一定不能有空格
//#define MAIN int main() \
//{\
//    std::cin.get();\
//}
//
//MAIN