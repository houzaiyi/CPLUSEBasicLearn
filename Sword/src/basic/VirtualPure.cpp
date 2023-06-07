//#include<iostream>
//#include <string>
//
////纯虚函数  类似于java中的interface  接口类
//
//class Printable
//{
//public:
//	virtual std::string GetClassName() = 0;
//};
//
//class Entity : public Printable
//{
//public:
//	virtual std::string GetName() //加虚函数virtual,不加入的话下面出错误,找不到子类的放啊
//	{
//		return "Entity";
//	}
//	std::string GetClassName() override { return "Entity"; }
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
//	std::string GetClassName() override { return "Player"; }
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
//	std::cout << p->GetClassName() << std::endl;
//
//
//
//	std::cin.get();
//}