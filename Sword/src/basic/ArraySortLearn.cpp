//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//int main()
//{
//	std::vector<int> values = {3,5,1,4,2};
//	std::sort(values.begin(), values.end(), [](int a, int b)//使用lambda表达式定制化排序 []是捕获的数值,可以传递参数
//		{
//			if (a == 1)
//				return false;//返回false是不满足条件，a是开始
//			if (b == 1)
//				return true;// b是末尾
//
//			return a < b;
//		});
//	for (int i = 0; i < values.size(); i++)
//		std::cout << values[i] << std::endl;
//}