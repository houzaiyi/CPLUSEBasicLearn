#include <iostream>
#include <string>

void PrintString(const std::string& string)//�����ַ���ʱ����������ʹ�����ò����������ڴ档
{
	std::cout << string << std::endl;
}

int main()
{
	//const char* name = "Hzy";
	std::string name = std::string("Hzy") + "hello!";
	const char name2[7] = {'H','z','y', 0}; //string��ԭ���������char  ����һ����ֹ��
	std::cout << name2 << std::endl;
	std::cout << name << std::endl;
	PrintString(name);
	std::cin.get();

}