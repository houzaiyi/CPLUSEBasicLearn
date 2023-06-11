//#include <iostream>
//#include <thread>
//
//static bool s_Finished = false;
//
//void DoWork()
//{
//	using namespace std::literals::chrono_literals;
//	std::cout << "Started thread id =" << std::this_thread::get_id() << std::endl;
//
//	while (!s_Finished)
//	{
//		std::cout << "working...\n";
//		std::this_thread::sleep_for(1s);
//	}
//}
//int main()
//{
//	std::thread worker(DoWork);//创建线程
//	std::cin.get();//按回车后执行下面代码,这里阻塞了,因为一直没按回车，所以这里一直不执行，按了之后
//	s_Finished = true;
//	worker.join();//等待子线程worker结束，才进入主线程。  子线程会执行结束
//	std::cout << "Finished" << std::endl;
//
//	std::cin.get();
//}