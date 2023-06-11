//#include <iostream>
//#include <variant>
//
//int main()
//{
//	//variant单一变量存储多种类型(只能存储一个数据)，但是技术上讲union更好,但是variant更加类型安全,不会造成未定义行为
//   std::variant<std::string, int> data;
//   data = "hzy";
//   
//   std::cout << std::get<std::string>(data) << "\n";
//   data = 1;
//   std::cout << std::get<int>(data) << "\n";
//
//   if (auto value = std::get_if<std::string>(&data))//第0个是string,第1个是int类型,get_if直接获取类型为string的数据然后判断
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