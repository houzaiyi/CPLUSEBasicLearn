//#include <iostream>
//#include <string>
//#include<stdlib.h>
//
//void PrintString(const std::string& string)//�����ַ���ʱ����������ʹ�����ò����������ڴ档
//{
//	std::cout << string << std::endl;
//}
//
//int main()
//{
//	using namespace std::string_literals;
//	"hzy"; //�ַ���������
//	//const char* name = "Hzy";
//	std::string name = std::string("Hzy") + "hello!";
//	std::u32string name0 = U"Hzy"s + U" hello!"; //����ֱ���� s ������ƴ��string
//	const char name2[7] = {'H','z','y', 0}; //string��ԭ���������char  ����һ����ֹ��
//
//	const char* example = R"(Line1
//line2
//line3
//)";//ƴ��string R�Ǻ���ת���ַ�
//
//	const char* ex = "Line1\n"
//		"line2\n"
//		"line3";//ƴ��string
//	std::cout << name2 << std::endl;
//	std::cout << name << std::endl;
//	PrintString(name);
//	std::cin.get();
//
//}