//#include <iostream>
//#include <string>
//#include <vector>
//
//struct Vertex
//{
//	float x, y, z;
//};
//
//std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)//��дcout,�����ӡ����
//{
//	stream << vertex.x << "," << vertex.y << "," << vertex.z;
//	return stream;
//}
//
//int main()
//{
//	std::vector<Vertex> vertices;//��������÷Ŷ���
//	vertices.push_back({1,2,3});
//	vertices.push_back({ 4,5,6});
//
//	for (int i = 0; i < vertices.size(); i++)//��������
//		std::cout << vertices[i] << std::endl;
//
//   
//	vertices.erase(vertices.begin() + 1);//ɾ���ڶ���Ԫ��
//	 
//	for (Vertex& v : vertices) //�������&����,��ô�����ֵ���Ƶ�v��
//		std::cout << v << std::endl;
//	
//
//
//	vertices.clear();//������ͬ����
//
//}