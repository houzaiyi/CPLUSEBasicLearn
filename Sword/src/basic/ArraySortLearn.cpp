//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//int main()
//{
//	std::vector<int> values = {3,5,1,4,2};
//	std::sort(values.begin(), values.end(), [](int a, int b)//ʹ��lambda���ʽ���ƻ����� []�ǲ������ֵ,���Դ��ݲ���
//		{
//			if (a == 1)
//				return false;//����false�ǲ�����������a�ǿ�ʼ
//			if (b == 1)
//				return true;// b��ĩβ
//
//			return a < b;
//		});
//	for (int i = 0; i < values.size(); i++)
//		std::cout << values[i] << std::endl;
//}