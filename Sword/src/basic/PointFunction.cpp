//#include <iostream>
//#include <vector>
//
//void HelloWorld()
//{
//	std::cout << "Hellow World!" << std::endl;
//}
//
//void PrintValue(int value)
//{
//	std::cout << "Value:" << value << std::endl;
//}
//
//void ForEach(const std::vector<int>& values, void(*func)(int))
//{
//	for (int value : values)
//		func(value);
//}
//
//int main()
//{//������������ʹ������ָ�룬����ѧϰ���˽⹤�����ۣ�ʹ��ԭʼָ�룬��Ȼ���������Ҫ���ƵĻ���Ҳ����ʹ���Լ�д������ָ��
//
//	typedef void(*HelloWorldFunction)();//ָ�뺯�����壬��ԭʼд��
//	HelloWorldFunction function = HelloWorld; 
//
//	//auto function = HelloWorld; // auto��ָ�뺯��д��
//	function();
//
//	std::vector<int> values = {1,2,3,4,5,6};
//
//	//ForEach(values,PrintValue);//��ԭʼ�ķ�ʽ
//
//	ForEach(values, [](int value) {std::cout << "Value:" << value << std::endl; });//lambdaд��,[]�ǲ�׽��ʽ
//	std::cin.get();
//}