//#include <iostream>
//#include <string>
//
//struct Vector3
//{
//	float x, y, z;
//	void Print() const
//	{
//		std::cout << "��ͷ����!" << std::endl;
//	}
//};
//int main()
//{
//	Vector3 v;//�ڴ���ջ��
//	v.Print();
//	Vector3* ptr = &v;
//	(*ptr).Print();//�������
//	ptr->Print();//��ͷ������ʵ�Ƕ�����ļ�!!
//
//
//
//	//��ȡx��ƫ����, ԭ������0��Vector3ָ��ȥ����x y z �õ����ǵ�ƫ���� ǿת��Int������
//	 int offset = (int)&((Vector3*)nullptr)->z;//ָ��Ϊ��ֵ��Ҳ���Բ�ָ�� ;const  Ĭ�ϼ������ֵ
//	std::cout << offset << std::endl;
//	std::cin.get();
//}