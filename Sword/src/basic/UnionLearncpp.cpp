//#include<iostream>
//struct Vector2
//{
//	float x, y;
//};
//
//struct Vector4
//{
//	union//union��ĳ�Ա�Ṳ���ڴ棬����Ĵ�С�ǰ�����Ա��sizeof,  �������ṹ���У��ı�����һ������һ�������Ӧ��Ҳ��ı�.
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