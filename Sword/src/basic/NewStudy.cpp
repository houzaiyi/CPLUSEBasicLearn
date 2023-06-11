//#include <iostream>
//#include <string>
//
//using String = std::string;
//class Entity {
//	String m_Name;
//public:
//	Entity() :m_Name("Unknow") {}
//	Entity(const String& name) : m_Name(name) {}
//	const String& GetName() const { return m_Name; }
//};
//int main()
//{
//
//	Entity* e;//下面的对象内存分配在栈上，在括号作用域中存在，超出括号作用域就会消失,e会为空    尽可能多用栈存储数据，除非数据太大或者有别的需求，
//
//	//*********分配在栈上的写法               栈上分配内存只是一条简单的cpu命令,而堆内存的申请分配会非常复杂
//	//{
//	//	Entity entity("hzy");
//	//	e = &entity;
//	//	std::cout << entity.GetName() << std::endl;
//	//}
//	//********分配在堆上的写法，用New创建对象必须delete              
//	{
//		Entity* entity = new  Entity("hzy");//不仅申请了内存还调用了构造方法，初始刷了Entity对象
//
//		//Entity* e = (Entity*)malloc(sizeof(Entity));//这个是c中的写法，只申请了内存，没有初始化对象
//
//		e = entity;
//		std::cout << entity->GetName() << std::endl;
//	}
//		std::cin.get();
//		delete e;//清除掉内存中的对象 c中的写法是free(e);
//
//}
