//#include <iostream>
//class Entity
//{
//public:
//	float X, Y;
//	Entity() //构造函数
//	{
//		X = 0.0f;
//		Y = 0.0f;
//		std::cout << "函数创建时候调用构造函数!" << std::endl;
//
//	}
//	Entity(float&& x, float&& y) //也是构造函数但是，参数不一样;用来初始化类信息 重载
//	{
//		X = x;
//		Y = y;
//		std::cout << "函数重载!" << std::endl;
//	}
//
//	~Entity()
//	{
//		std::cout <<  "函数销毁时候调用析构函数!" << std::endl;
//
//	}
//	void Print()
//	{
//		std::cout << X << ":" << Y << std::endl;
//	}
//};
//
//void Function()
//{
//	Entity e;//函数初始化
//	e.Print();
//	e.~Entity();
//   Entity(6.0f, 3.0f).Print();//函数重载
//}
//int main()
//{
//	Function();
//	std::cin.get();
//}