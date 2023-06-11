//#include <iostream>
//#include<string>
//
//class Example
//{
//public:
//	Example()
//	{
//		std::cout << "created entity!" << std::endl;
//	}
//	Example(int x)
//	{
//		std::cout << "created entity with" << x << "!" << std::endl;
//	}
//};
//class Entity
//{
//private:
//	std::string m_Name;
//	Example m_Example;
//public:
//	Entity()
//		//:m_Name("Unkonow") //初始化成员变量，在这里让代码整洁高效，避免资源浪费
//		:m_Example(Example(8))//如果吧下面的移到上面，会减少一个Example对象的产生
//	{
//		m_Name = std::string("Unkonow");
//		/*m_Example = Example(8);*/ //这里初始化会打印两次语句,创建两个实例
//	}
//	Entity(const std::string& name)
//		: m_Name(name)
//	{
//
//	}
//};
//int main()
//{
//	Entity e0;
//	std::cin.get();
//
//}