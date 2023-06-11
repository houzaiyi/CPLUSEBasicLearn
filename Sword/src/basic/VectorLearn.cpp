//#include <iostream>
//#include <string>
//#include <vector>
//
//struct Vertex
//{
//	float x, y, z;
//};
//
//std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)//重写cout,方便打印数组
//{
//	stream << vertex.x << "," << vertex.y << "," << vertex.z;
//	return stream;
//}
//
//int main()
//{
//	std::vector<Vertex> vertices;//数组里最好放对象
//	vertices.push_back({1,2,3});
//	vertices.push_back({ 4,5,6});
//
//	for (int i = 0; i < vertices.size(); i++)//遍历数组
//		std::cout << vertices[i] << std::endl;
//
//   
//	vertices.erase(vertices.begin() + 1);//删除第二个元素
//	 
//	for (Vertex& v : vertices) //如果不加&符号,那么会把数值复制到v中
//		std::cout << v << std::endl;
//	
//
//
//	vertices.clear();//数组内同清理
//
//}