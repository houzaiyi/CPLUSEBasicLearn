//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//void ForEach(const std::vector<int>& values,const std::function<void(int)>& func)
//{
//	for (int value : values)
//		func(value);
//}
//
//int main()
//{
//	
//	// lambdaʹ�û���:ֻҪ����һ������ָ�룬��Ϳ�����c++��ʹ��lambda���ʽ
//
//	std::vector<int> values = {1,5,4,2,3};
//	auto it = std::find_if(values.begin(), values.end(), [](int value) {return value > 3; });//����lambda���Ҿ�̬�����е�һ������3������
//
//	std::cout << *it << std::endl;
//
//	int a = 5;
//	//[]�ǲ������˼����ȡ�ⲿ��ֵ������lambda�������ڲ�. =�ǲ�������ͨ�����û��߿��������ֵ; & this ����� 
//	//[a,&b] a�ǿ���,b�����ô���
//	//this �����ô���
//	//&ͨ������
//	auto lambda = [=](int value) {std::cout << "Value:" << a << std::endl; };
//	ForEach(values,lambda);
//	std::cin.get();
//}