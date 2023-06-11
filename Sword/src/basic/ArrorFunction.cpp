//#include <iostream>
//#include <string>
//
//struct Vector3
//{
//	float x, y, z;
//	void Print() const
//	{
//		std::cout << "箭头函数!" << std::endl;
//	}
//};
//int main()
//{
//	Vector3 v;//内存在栈上
//	v.Print();
//	Vector3* ptr = &v;
//	(*ptr).Print();//逆向调用
//	ptr->Print();//箭头函数其实是对逆向的简化!!
//
//
//
//	//获取x的偏移量, 原理是用0的Vector3指针去访问x y z 得到他们的偏移量 强转成Int的引用
//	 int offset = (int)&((Vector3*)nullptr)->z;//指定为右值，也可以不指定 ;const  默认兼具左右值
//	std::cout << offset << std::endl;
//	std::cin.get();
//}