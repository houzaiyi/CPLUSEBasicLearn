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
//		//:m_Name("Unkonow") //��ʼ����Ա�������������ô��������Ч��������Դ�˷�
//		:m_Example(Example(8))//�����������Ƶ����棬�����һ��Example����Ĳ���
//	{
//		m_Name = std::string("Unkonow");
//		/*m_Example = Example(8);*/ //�����ʼ�����ӡ�������,��������ʵ��
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