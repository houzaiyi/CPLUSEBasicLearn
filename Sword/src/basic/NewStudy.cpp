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
//	Entity* e;//����Ķ����ڴ������ջ�ϣ��������������д��ڣ���������������ͻ���ʧ,e��Ϊ��    �����ܶ���ջ�洢���ݣ���������̫������б������
//
//	//*********������ջ�ϵ�д��               ջ�Ϸ����ڴ�ֻ��һ���򵥵�cpu����,�����ڴ����������ǳ�����
//	//{
//	//	Entity entity("hzy");
//	//	e = &entity;
//	//	std::cout << entity.GetName() << std::endl;
//	//}
//	//********�����ڶ��ϵ�д������New�����������delete              
//	{
//		Entity* entity = new  Entity("hzy");//�����������ڴ滹�����˹��췽������ʼˢ��Entity����
//
//		//Entity* e = (Entity*)malloc(sizeof(Entity));//�����c�е�д����ֻ�������ڴ棬û�г�ʼ������
//
//		e = entity;
//		std::cout << entity->GetName() << std::endl;
//	}
//		std::cin.get();
//		delete e;//������ڴ��еĶ��� c�е�д����free(e);
//
//}
