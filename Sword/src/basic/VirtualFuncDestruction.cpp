//#include <iostream>
//
//class Base
//{
//public:
//	Base() { std::cout << "Base Constructor\n"; }
//	virtual ~Base() { std::cout << "Base Destructor\n"; }//虚析构函数
//};
//
//class Derived : public Base
//{
//public:
//	Derived() { std::cout << "Derived Constructor\n"; }
//	~Derived() { std::cout << "Derived Destructor\n"; }
//};
//
//int main()
//{
//	Base* b = new Base();
//	delete b;
//   std::cout << "****************************\n";
//	Derived* d = new Derived();
//	delete d;
//
//	std::cout << "****************************\n";
//	Base* f = new Derived();//如果不加虚析构函数,那么这个多态类不会执行继成类的析构函数,所以基类必须加virtual
//	delete f;
//	std::cout << "****************************\n";
//    std::cin.get();
//}