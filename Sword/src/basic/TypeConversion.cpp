//#include <iostream>
//
//struct Entity
//{ 
//	int x, y;
//};
//int main()
//{
//
//	//******����ת��
//	int a = 50;
//	double value = a;//ͨ��ת��
//	std::cout << "��ͨת��:" << a << std::endl;
//	double valueOrigin = *(double*)&a;//��ԭʼ��ת����ʽ,��ȡ��ַ��ת��Ϊdoubleָ��,��������ȡ��ֵ ��������ôд; ��Ϊint��4�ֽ�,double��8�ֽڣ��������ƻ���double��ʧ�ֽ�
//	std::cout << "��ԭʼ��ת��:" << valueOrigin << std::endl;
//
//	//�����������͵�ת�� *******����
//	Entity e = {5,8};
//	int* position = (int*)&e;
//	int y = *(int*)((char*)&e + 4);//����ƶ�4���ֽڵõ�y,���ƶ�����x
//	std::cout << y << std::endl;
//	int x = *(int*)((char*)&e);//��ȡe�ĵ�ַ��ת����charָ��;��charָ��ת��Ϊintָ�룬֮��ȡ��intָ���ֵ
//	std::cout << x << std::endl;
//	std::cin.get();
//}