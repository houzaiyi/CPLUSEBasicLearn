//#include<iostream>
//#include <chrono>
//#include <thread>
//
//struct Timer
//{
//	std::chrono::time_point<std::chrono::steady_clock> start, end;
//	std::chrono::duration<float> duration;
//
//	Timer()
//	{
//		start = std::chrono::high_resolution_clock::now();
//	}
//	~Timer()
//	{
//		end = std::chrono::high_resolution_clock::now();
//		duration = end - start;
//		float ms = duration.count() * 1000.0f;
//		std::cout << "Timer took" << ms << "ms" << std::endl;
//	}
//};
//void Function()
//{
//	Timer timer;
//	for (int i = 0; i < 100; i++)
//		std::cout << "Hello\n";//sed::endl;很慢 所以替换下
//		//std::cout << "Hello" << std::endl;//sed::endl;很慢 所以替换下
//}
//int main()
//{
//	//using namespace std::literals::chrono_literals;//最原始的统计方法
//	//auto start = std::chrono::high_resolution_clock::now();
//	//std::this_thread::sleep_for(1s);
//	//auto end = std::chrono::high_resolution_clock::now();
//	//std::chrono::duration<float> duration = end - start;
//	//std::cout << duration.count() << "s" << std::endl;
//	Function();//利用栈的生命周期统计函数时间的方法
//	std::cin.get();
//}