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
//	~Entity()//��������������ʱ����
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
//		ScopedPtr e = new Entity();//����ջ���ص�,����������������١� �����ж���� ���١�
//	}
//	
//	std::cin.get();
//}