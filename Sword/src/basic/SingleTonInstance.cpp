//#include <iostream>
//
//class Random
//{
//public:
//	Random(const Random&) = delete;
//	static Random& Get()//����ģʽ:ȫ�ֲ���Ψһ���󣬱������������������;
//	{
//		static Random s_Instance;//���������������������������������
//		return s_Instance;
//	}
//
//	static float Float() { return Get().IFloat();}
//
//private:
//	float IFloat() { return m_RandomGeberator; }
//	Random() {}
//	float m_RandomGeberator = 0.50f;
//};
//int main()
//{
//	float number = Random::Float();
//	std::cout << number << std::endl;
//	std::cin.get();
//}