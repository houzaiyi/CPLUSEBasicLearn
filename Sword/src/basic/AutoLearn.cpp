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
//	const std::unordered_map<std::string, std::vector<Device*>>& GetDevices() const //ǰ��const ��ŵ����ֵ���䣬����ĳ�ŵ��������
//	{
//		return m_Devices;
//	}
//
//};
//int main()
//{
//	std::vector<std::string> strings;//����
//	strings.push_back("Apple");
//	strings.push_back("Orange");
//	for (auto it = strings.begin(); it != strings.end(); it++)//�Զ�ƥ������
//	{
//		std::cout << *it << std::endl;
//	}
//	using DeviceMap = std::unordered_map < std::string, std::vector<Device* >> ;
//	DeviceManger dm;
//	//const std::unordered_map < std::string, std::vector<Device* >> &
//	//	devices = dm.GetDevices();
//
//	const auto& devices = dm.GetDevices();//auto���Զ�ƥ������,��ò��ã��ɶ��Բ�����������������ͺܸ��ӿ������£��򻯴���  auto&��ȡ������ֵ
//
//	std::cin.get();
//}