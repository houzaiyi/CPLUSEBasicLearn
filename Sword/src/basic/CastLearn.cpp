//#include <iostream>
//#include <string>
//
//
////* cast 分为 static_cast  dynamic_cast reinterpret_cast const_cast
////* static_cast static_cast 用于进行比较“自然”和低风险的转换，
//// 如整型和浮点型、字符型之间的互相转换, 不能用于指针类型的强制转换
////* reinterpret_cast  用于进行各种不同类型的指针之间强制转换
////* const_cast 仅用于进行去除 const 属性的转换
////* dynamic_cast 不检查转换安全性，仅运行时检查，如果不能转换，返回null
//
//class Entity
//{
//public:
//	virtual void PrintName() {}//想要使用动态类型转换,基类必须要有虚函数,让这个类有虚函数表
//};
//class Player : public Entity  //继承Entity
//{};
//class Enemy : public Entity
//{};
//
//int main()
//{
//	Player* player = new Player();
//	Entity* e = player;//多态
//	Entity* e1 = new Enemy();
//	
//	Player* p = dynamic_cast<Player*>(e);
//	Player* f = dynamic_cast<Player*>(e1);//这个会转换失败为空，识别出来他不是Player 仅运行时检查
//    std::cin.get();
//}
//
//
//
