//#include <iostream>
//#include <string>
//
//
////* cast ��Ϊ static_cast  dynamic_cast reinterpret_cast const_cast
////* static_cast static_cast ���ڽ��бȽϡ���Ȼ���͵ͷ��յ�ת����
//// �����ͺ͸����͡��ַ���֮��Ļ���ת��, ��������ָ�����͵�ǿ��ת��
////* reinterpret_cast  ���ڽ��и��ֲ�ͬ���͵�ָ��֮��ǿ��ת��
////* const_cast �����ڽ���ȥ�� const ���Ե�ת��
////* dynamic_cast �����ת����ȫ�ԣ�������ʱ��飬�������ת��������null
//
//class Entity
//{
//public:
//	virtual void PrintName() {}//��Ҫʹ�ö�̬����ת��,�������Ҫ���麯��,����������麯����
//};
//class Player : public Entity  //�̳�Entity
//{};
//class Enemy : public Entity
//{};
//
//int main()
//{
//	Player* player = new Player();
//	Entity* e = player;//��̬
//	Entity* e1 = new Enemy();
//	
//	Player* p = dynamic_cast<Player*>(e);
//	Player* f = dynamic_cast<Player*>(e1);//�����ת��ʧ��Ϊ�գ�ʶ�����������Player ������ʱ���
//    std::cin.get();
//}
//
//
//
