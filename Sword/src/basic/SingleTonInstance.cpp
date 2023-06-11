//#include <iostream>
//
//class Random
//{
//public:
//	Random(const Random&) = delete;
//	static Random& Get()//单例模式:全局产生唯一对象，比如随机数，返回数据;
//	{
//		static Random s_Instance;//单例对象的生命周期是你服务的生命周期
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