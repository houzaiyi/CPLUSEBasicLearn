//#include <iostream>
//class Entity
//{
//public:
//	float X, Y;
//	Entity() //���캯��
//	{
//		X = 0.0f;
//		Y = 0.0f;
//		std::cout << "��������ʱ����ù��캯��!" << std::endl;
//
//	}
//	Entity(float&& x, float&& y) //Ҳ�ǹ��캯�����ǣ�������һ��;������ʼ������Ϣ ����
//	{
//		X = x;
//		Y = y;
//		std::cout << "��������!" << std::endl;
//	}
//
//	~Entity()
//	{
//		std::cout <<  "��������ʱ�������������!" << std::endl;
//
//	}
//	void Print()
//	{
//		std::cout << X << ":" << Y << std::endl;
//	}
//};
//
//void Function()
//{
//	Entity e;//������ʼ��
//	e.Print();
//	e.~Entity();
//   Entity(6.0f, 3.0f).Print();//��������
//}
//int main()
//{
//	Function();
//	std::cin.get();
//}