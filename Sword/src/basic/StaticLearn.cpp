//#include<iostream>
//class Singleton
//	//静态变量什么时候用,如果你想让所有entity都共享一条信息,素有entity只会修改这一条信息；所有实例指向这一个地址
//// 静态方法是没有实例的，可以直接调用
//// 局部静态方法或者变量 只有局部可见，可用。
//{
//public:
//	static Singleton& Get()
//	{
//		static Singleton instance;
//		return instance;
//	}
//	void Hello()
//	{
//		std::cout << "单例模式!" << std::endl;
//	}
//
//};
//
//int main()
//{
//	Singleton::Get().Hello();
//}