//#include <iostream>
//#include <fstream>
//#include <optional>
//
//std::optional<std::string> ReadFileAsString(const std::string& filepath)
//{
//	//optional�����ǲ�֪�������ǲ��Ǵ��ڵ�ʱ����Խ��д����ж�
//	std::ifstream stream(filepath);
//	if (stream)
//	{
//		std::string result;
//		stream.close();
//		return result;
//	}
//	return {};
//}
//int main()
//{
//	std::optional<std::string> data = ReadFileAsString("D:/swordTool/game/devTool/c++WorkSpace/Sword/Sword/src/basic/data.txt");
//	if (data)
//	{
//	std::cout << "File read successfully!\n";
//	}
//	else
//	{
//		std::cout << "File could not be open!\n";
//	}
//}
