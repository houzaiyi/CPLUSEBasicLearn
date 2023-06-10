//#include<iostream>
//struct Vector2
//{
//	float x, y;
//};
//
//struct Vector4
//{
//	union//union里的成员会共享内存，分配的大小是按最大成员的sizeof,  这两个结构体中，改变其中一个另外一个里面对应的也会改变.
//	{
//		struct
//		{
//			float x, y, z, w;
//		};
//		struct
//		{
//			Vector2 a, b;
//		};
//	};
//};
//void PrintVector2(const Vector2& vector)
//{
//	std::cout << vector.x << "," << vector.y << std::endl;
//}
//int main()
//{
//	Vector4 vector = {1.0f,2.0f,3.0f,4.0f};
//
//	PrintVector2(vector.a);
//	PrintVector2(vector.b);
//	vector.z = 500.0f;
//	vector.w = 900.0f;
//	std::cout << "-------------------------------" << std::endl;
//
//	PrintVector2(vector.a);
//	PrintVector2(vector.b);
//
//	std::cin.get();
//}