//#include<iostream>
//#include <string>
//
////�麯��ԭ��:ͨ��v(�����)��,���а��������������麯����ӳ��
////�麯���б׶�,��Ҫv��ָ�롢�Լ�����v��
//
//class Entity
//{
//public:
//	virtual std::string GetName() //���麯��virtual,������Ļ����������,�Ҳ�������ķ���
//	{
//		return "Entity";
//	}
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
//
//	Entity* entity = p;//�����ʹ���麯������ô�����GetName������p�е�GetName,���Ǹ����е�
//	std::cout << entity->GetName() << std::endl;
//
//	std::cin.get();
//}