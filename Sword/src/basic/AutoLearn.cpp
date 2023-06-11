//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//
//
//
//const char* GetName()
//{
//	return "hzy";
//}
//
//class Device {};
//
//class DeviceManger
//{
//private:
//	std::unordered_map<std::string, std::vector<Device*>> m_Devices;
//public:
//	const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const //前面const 承诺返回值不变，后面的承诺函数不变
//	{
//		return m_Devices;
//	}
//
//};
//int main()
//{
//	std::vector<std::string> strings;//数组
//	strings.push_back("Apple");
//	strings.push_back("Orange");
//	for (auto it = strings.begin(); it != strings.end(); it++)//自动匹配类型
//	{
//		std::cout << *it << std::endl;
//	}
//	using DeviceMap = std::unordered_map < std::string, std::vector<Device* >> ;
//	DeviceManger dm;
//	//const std::unordered_map < std::string, std::vector<Device* >> &
//	//	devices = dm.GetDevices();
//
//	const auto& devices = dm.GetDevices();//auto是自动匹配类型,最好不用，可读性差，但是如果上述情况类型很复杂可以用下，简化代码  auto&获取的是左值
//
//	std::cin.get();
//}