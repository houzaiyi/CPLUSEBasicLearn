//#include <iostream>
//#include <string>
//#include <memory>
//
//class Entity
//{
//public:
//	Entity()
//	{
//		std::cout << "created Entity!" << std::endl;
//	}
//	~Entity()
//	{
//		std::cout << "destory entity" << std::endl;
//	}
//	void Print() {}
//};
//int main()
//{
//
//	//unique_ptr����С,��ѡ��   shared_ptrʹ�������ü�����������Դ�,���ǵ����ڶ��������ʱ����Ҫ��shared_ptrָ�룻
//	//{
//	//	//����ָ��unique_ptr �뿪���������,����ͻᱻ����,����new����Ϊ���쳣��ȫΪ����
//	//	std::unique_ptr<Entity> entity = std::make_unique<Entity>();
//	//	entity->Print();
//	//}
//	// *************************shared_ptr:sharptr�ǻ������ü����������Ը������ָ���ж��ٸ�����,����һ��Ϊ0��ô��ɾ��delete
//	//{
//	//	std::shared_ptr<Entity> e0;//�������
//	//	{
//	//		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
//	//		e0 = sharedEntity;//�ڲ�����
//	//	}
//	//}//�ߵ�����Ż�ִ��ɾ��delete������������ʧ�Ż�ɾ��
//
//	//************weak_ptr: shared_ptr��ֵ��weak_ptr�����������ü���  �����shared_ptrѭ����������
//	{
//		std::weak_ptr<Entity> e0;
//		{
//			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
//			e0 = sharedEntity; //shared_ptr��ֵ��weak_ptr�����������ü���
//		}//sharedEntity�����ﱻ����,����e0����,e0ָ����ǿ�
//	}
//
//	std::cin.get();
//}