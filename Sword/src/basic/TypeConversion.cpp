//#include <iostream>
//
//struct Entity
//{ 
//	int x, y;
//};
//int main()
//{
//
//	//******基础转换
//	int a = 50;
//	double value = a;//通用转换
//	std::cout << "普通转换:" << a << std::endl;
//	double valueOrigin = *(double*)&a;//最原始的转换方式,获取地址后转换为double指针,最后逆向获取数值 不建议这么写; 因为int是4字节,double是8字节，这样复制会让double丢失字节
//	std::cout << "最原始的转换:" << valueOrigin << std::endl;
//
//	//基础数据类型的转换 *******进阶
//	Entity e = {5,8};
//	int* position = (int*)&e;
//	int y = *(int*)((char*)&e + 4);//向后移动4个字节得到y,不移动就是x
//	std::cout << y << std::endl;
//	int x = *(int*)((char*)&e);//获取e的地址，转换成char指针;把char指针转换为int指针，之后取出int指针的值
//	std::cout << x << std::endl;
//	std::cin.get();
//}