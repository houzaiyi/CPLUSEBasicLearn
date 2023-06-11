//#include<iostream>
//#include <string>
//
////虚函数原理:通过v(虚拟表)表,表中包含基类中所有虚函数的映射
////虚函数有弊端,需要v表、指针、以及遍历v表
//
//class Entity
//{
//public:
//	virtual std::string GetName() //加虚函数virtual,不加入的话下面出错误,找不到子类的方法
//	{
//		return "Entity";
//	}
//};
//
//class Player : public Entity
//{
//private:
//	std::string m_Name;
//public:
//	Player(const std::string& name)//std::string就是标准string  sed的全拼standard
//		: m_Name(name) {}//构造函数 给名字赋值
//	std::string GetName() override { return m_Name; } //重写父类方法，添加override增加可读性
//};
//
//
//int main()
//{
//	Entity* e = new Entity();
//	std::cout << e->GetName() << std::endl;
//
//	Player* p = new Player("zy");
//	std::cout << p->GetName() << std::endl;
//
//	Entity* entity = p;//如果不使用虚函数，那么下面的GetName并不是p中的GetName,而是父类中的
//	std::cout << entity->GetName() << std::endl;
//
//	std::cin.get();
//}