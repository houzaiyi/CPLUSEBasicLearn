//#include <iostream>
//#include <string>
//
//static uint32_t s_AllocCOunt = 0;
//
//void* operator new(size_t size)//���з���ռ䶼��ͨ�����new������
//{
//	s_AllocCOunt++;
//	std::cout << "Allocating" << size << "bytes\n";
//	return malloc(size);
//}
//
//
//
//#define STRING_VIEW 1
//#if STRING_VIEW
//void PrintName(const std::string_view name)//�Ż��汾 ʹ��string_view��ͼ�Ż�
//{
//	std::cout << name << std::endl;
//}
//#else
//void PrintName(const std::string& name)//���Ż��汾
//{
//	std::cout << name << std::endl;
//}
//#endif
//
//int main()
//{
//	std::string name = "��� zy";//ԭʼ std::string  ���κ�С��15�ַ����ַ��������ᵼ���ڴ����,����15�ͻ����
//	//const char* name = "��� zy";// ��̬�ַ������������new�ڴ�
//#if STRING_VIEW
//	std::string_view firstName(name.c_str(), 4);
//	std::string_view lasttName(name.c_str() + 5, 7);
//#else
//	std::string firstName = name.substr(0, 2);//substr������ڴ� ����һ��
//	std::string lasttName = name.substr(3, 5);
//#endif
//	
//	PrintName(firstName);
//	PrintName(lasttName);
//	std::cout << "s_AllocCOunt:" << s_AllocCOunt << std::endl;
//	std::cin.get();
//}