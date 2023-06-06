//#include <iostream>
//#include<string>
//
//class Entity
//{
////private:// X,Y私有的情况下只有Entity类中的才可以掉用,friend除外
//protected: //这个Entity类和层次结构中的所有子类，也可以访问这些符号
////public:
//	int X, Y;
//	void Print() {}
//public:
//	Entity()
//	{
//		X = 0;
//		Y = 0;
//	}
//};
//
//class Player : public Entity
//{
//	Player()
//	{
//		X = 2;
//		Print();
//	}
//};
//
//int main()
//{
//	Entity e;
//	//e.X = 2;		//X,Y私有的情况下只有Entity类中的才可以掉用,friend除外,protected在这里也不可以问道
//	std::cin.get();
//}