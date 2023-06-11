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
//	//unique_ptr开销小,首选；   shared_ptr使用了引用计数，开销相对大,但是当想在对象间分享的时候需要用shared_ptr指针；
//	//{
//	//	//智能指针unique_ptr 离开这个作用域,对象就会被销毁,不用new是因为有异常安全为问题
//	//	std::unique_ptr<Entity> entity = std::make_unique<Entity>();
//	//	entity->Print();
//	//}
//	// *************************shared_ptr:sharptr是基于引用计数法，可以跟踪你的指针有多少个引用,引用一旦为0那么久删除delete
//	//{
//	//	std::shared_ptr<Entity> e0;//外层引用
//	//	{
//	//		std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
//	//		e0 = sharedEntity;//内层引用
//	//	}
//	//}//走到这里才会执行删除delete，所有引用消失才会删除
//
//	//************weak_ptr: shared_ptr赋值给weak_ptr不会增加引用计数  ，解决shared_ptr循环引用问题
//	{
//		std::weak_ptr<Entity> e0;
//		{
//			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
//			e0 = sharedEntity; //shared_ptr赋值给weak_ptr不会增加引用计数
//		}//sharedEntity在这里被销毁,但是e0还在,e0指向的是空
//	}
//
//	std::cin.get();
//}