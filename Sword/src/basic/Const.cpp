//#include <iostream>
//#include <string>
//
//class Entity
//{
//private:
//	int* m_X, *m_Y;  //如果y不加*号 他是个整形
//	std::string m_Name;
//	mutable int m_DebugCount = 0;	//mutable是const的反转，意思是可改变的
//public:
//	const int* const GetX() const //意思是返回了一个不能修改的指针;内容和地址都不可以修改  方法后面加const，表明承诺函数不会被修改
//	{
//		return m_X;
//	}
//
//public:
//	const std::string& GetName() const //承诺类不会更改
//	{
//		m_DebugCount++;//因为有mutable,这里可以例外修改
//		return m_Name;
//	}
//};
//
//int main()
//{
//	
//	const int Max_Age = 90;
//
//	//const在 *前锁内容，在*后锁地址
//	int const* a = new int; //和下面 const int* a写法效果等同
//	//const int* a = new int;//如果const这样写*a = 2; 无法修改(内容锁了地址没锁)，因为a的值是实际内存地址上的内容; 但是可以更改他的地址指向
//
//
//	 //int* const a = new int;//如果const这样写*a = 2可以;; 但是不可以更改他的地址指向(地址锁了,内容没锁)
//
//	//*a = 2;
//	a = (int*)&Max_Age; 
//}