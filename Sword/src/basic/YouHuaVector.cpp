//#include <iostream>
//#include<string>
//#include <vector>
//
//struct Vertex
//{
//	float x, y, z;
//	Vertex(float x, float y, float z)
//		: x(x),y(y),z(z)
//	{
//
//	}
//	Vertex(const Vertex& vertex)//如果执行过这个构造方法就会打印,证明复制过
//		:x(vertex.x), y(vertex.y), z(vertex.z)
//	{
//		std::cout << "Copied" << std::endl;
//	}
//};
//int main()
//{
//	std::vector<Vertex> vertices;
//	vertices.reserve(3);//优化1  提前申请内存，避免动态申请开销
//	vertices.emplace_back(1,2,3);//优化2, emplace_back直接在容器尾部创建元素,省略拷贝或者移动过程
//	vertices.emplace_back(4,5,6);
//	vertices.emplace_back(7, 8, 9);
//
//}