//#include <iostream>
//#include <variant>
//
//int main()
//{
//	//variant��һ�����洢��������(ֻ�ܴ洢һ������)�����Ǽ����Ͻ�union����,����variant�������Ͱ�ȫ,�������δ������Ϊ
//   std::variant<std::string, int> data;
//   data = "hzy";
//   
//   std::cout << std::get<std::string>(data) << "\n";
//   data = 1;
//   std::cout << std::get<int>(data) << "\n";
//
//   if (auto value = std::get_if<std::string>(&data))//��0����string,��1����int����,get_ifֱ�ӻ�ȡ����Ϊstring������Ȼ���ж�
//   {
//	  
//	   std::string& v = *value;
//   }
//   else
//   {
//
//   }
//   std::cin.get();
//}