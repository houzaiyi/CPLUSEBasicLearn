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
//	Vertex(const Vertex& vertex)//���ִ�й�������췽���ͻ��ӡ,֤�����ƹ�
//		:x(vertex.x), y(vertex.y), z(vertex.z)
//	{
//		std::cout << "Copied" << std::endl;
//	}
//};
//int main()
//{
//	std::vector<Vertex> vertices;
//	vertices.reserve(3);//�Ż�1  ��ǰ�����ڴ棬���⶯̬���뿪��
//	vertices.emplace_back(1,2,3);//�Ż�2, emplace_backֱ��������β������Ԫ��,ʡ�Կ��������ƶ�����
//	vertices.emplace_back(4,5,6);
//	vertices.emplace_back(7, 8, 9);
//
//}