#include <iostream>
#include "Log.h"

static int	Multiply(int a, int b)
{
	Log("Multiply");
	return a * b;
}
//������Ϊ����û�п�ʼ����  �����ǽ���debugģʽ���ڵ��Դ������ڴ�ѡ��,���Կ��ڴ���Ϣ
int main()
{
	std::cout << Multiply(5, 6) << std::endl;
	std::cin.get();
}