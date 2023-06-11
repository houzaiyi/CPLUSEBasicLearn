//#include <iostream>
//#include<string>
//
//class Entity
//{
//public:
//	Entity()
//	{
//		std::cout << "creatrd Entity!" << std::endl;
//	}
//
//	~Entity()//析构函数，销毁时调用
//	{
//		std::cout << "Destoryed Entity!" << std::endl;
//	}
//};
//class ScopedPtr
//{
//private:
//	Entity* m_Ptr;
//public:
//	ScopedPtr(Entity* ptr)
//		: m_Ptr(ptr)
//	{
//	}
//	~ScopedPtr()
//	{
//		delete m_Ptr;
//	}
//
//};
//int main()
//{
//	{
//		ScopedPtr e = new Entity();//利用栈的特点,即过了作用域就销毁。 来进行对象的 销毁。
//	}
//	
//	std::cin.get();
//}