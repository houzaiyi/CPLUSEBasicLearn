//#include<iostream>
//#include <chrono>
//#include<memory>
//
//class Timer
//{
//private:
//	std::chrono::time_point < std::chrono::high_resolution_clock> m_StartTimepoint;
//public:
//	Timer()
//	{
//		m_StartTimepoint = std::chrono::high_resolution_clock::now();
//	}
//	~Timer()
//	{
//		Stop();
//	}
//	void Stop()
//	{
//		auto endTimepoint = std::chrono::high_resolution_clock::now();
//		auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTimepoint).time_since_epoch().count();
//
//		auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTimepoint).time_since_epoch().count();
//		auto duration = end - start;
//		double ms = duration * 0.001; //΢��
//	}
//};
//
// struct Vector2 
//{
//	float x, y;
//};
//int mian()
//{
//
//	{
//		std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs();
//		Timer timer;
//		for (int i = 0; i < sharedPtrs.size(); i++)
//			sharedPtrs[i] = std::make_shared<Vector2>();
//	}
//
//
//}
//
