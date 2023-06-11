//#include<iostream>
//#include<string>
//
//class Entity
//{
//private:
//	std::string m_Name;
//	int m_Age;
//public:
//	explicit Entity(const std::string& name)
//		:m_Name(name), m_Age(-1) {}
//	explicit Entity(int age)
//		:m_Name("Unknow"), m_Age(age) {}
//};
//void PrintEntity(const Entity& entity)
//{
//
//}
//int main()
//{
//
//	//隐式转换就是因为有对应的构造方法，比如有接受int的构造方法,那么直接=是可以把int隐式转换为Entity的,相当于调用构造方法
//	//隐式转换失败
//	//PrintEntity(22);
//	PrintEntity(Entity("Cherno"));//如果explicit存在，这个实际上还是掉不到
//	/////如果explicit存在，隐式转换失败
//	//Entity a = std::string("hzy");
//	//Entity b = 22;
//	std::cin.get();
//}