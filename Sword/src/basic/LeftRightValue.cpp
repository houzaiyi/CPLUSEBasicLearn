//#include <iostream>
//
////�Ⱥ��������ֵ���ұ�����ֵ��  ��ֵ����ĳ�ִ洢֧�ֵı�������ֵ����ʱֵ
//// const std::string name �汸֧������ֵ
//void PrintName(std::string& name)//��֧����ֵ
//{
//	std::cout << "[lvalue]" << name << std::endl;
//}
//void PrintName(std::string&& name)//��֧����ֵ
//{
//	std::cout << "[lvalue]" << name << std::endl;
//}
//int main()
//{
//	std::string firstName = "aa";
//	std::string lastName = "hzy";
//	std::string plusName = firstName + lastName;
//
//	PrintName(firstName);//��ֵ
//	PrintName(firstName + lastName);//��ֵ ��Ϊ֪�����������ֵֻ������ʱ����,���Կ��������� 
//}