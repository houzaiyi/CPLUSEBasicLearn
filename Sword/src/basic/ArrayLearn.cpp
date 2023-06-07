//#include <iostream>
//
//class Entity
//{
//public:
//	static const int exampleSize = 5;
//	int example[exampleSize];//内存直接分配在栈上，花括号结束就没了，跳出作用域就会消失
//
//	Entity()
//	{
//		for (int i = 0; i < exampleSize; i++)
//			example[i] = 2;
//	}
//
//};
//
//int main()
//{
//	Entity e;
//
//	int* another = new int[5];//内存分配在堆上，delete完毕后才消失。
//	for (int i = 0; i < 5; i++)
//		another[i] = 2;
//
//	delete[] another;
//	std::cin.get();
//
//}