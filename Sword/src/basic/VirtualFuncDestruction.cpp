//#include <iostream>
//
//class Base
//{
//public:
//	Base() { std::cout << "Base Constructor\n"; }
//	virtual ~Base() { std::cout << "Base Destructor\n"; }//����������
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
//	Base* f = new Derived();//�����������������,��ô�����̬�಻��ִ�м̳������������,���Ի�������virtual
//	delete f;
//	std::cout << "****************************\n";
//    std::cin.get();
//}