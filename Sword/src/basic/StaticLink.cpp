//#include <iostream>
//#include <GLFW/glfw3.h>
//
////静态链接:静态链接更快，意味着这个库会被放到你的可执行文件中,他在你的exe文件中
//
////静态链接和动态连接的区别:   库文件是否被编译到exe文件中或者链接到exe文件中,动态链接库是运行时被链接的; exe中有静态链接库中的所有东西,可以直接运行exe
//
////在linker的input中的addtional Dependencies中添加动态链接库 并且，把动态链接的dll复制到debug的exe文件同级目录下
////通过dll文件找到要连接的库
//
//int main()
//{
//	int a = glfwInit();
//	std::cout << a << std::endl;
//	std::cin.get();
//}