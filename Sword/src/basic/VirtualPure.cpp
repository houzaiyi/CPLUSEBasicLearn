//#include<iostream>
//#include <string>
//
////���麯��  ������java�е�interface  �ӿ���
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
//	virtual std::string GetName() //���麯��virtual,������Ļ����������,�Ҳ�������ķŰ�
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
//	Player(const std::string& name)//std::string���Ǳ�׼string  sed��ȫƴstandard
//		: m_Name(name) {}//���캯�� �����ָ�ֵ
//	std::string GetName() override { return m_Name; } //��д���෽�������override���ӿɶ���
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