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
//	std::thread worker(DoWork);//�����߳�
//	std::cin.get();//���س���ִ���������,����������,��Ϊһֱû���س�����������һֱ��ִ�У�����֮��
//	s_Finished = true;
//	worker.join();//�ȴ����߳�worker�������Ž������̡߳�  ���̻߳�ִ�н���
//	std::cout << "Finished" << std::endl;
//
//	std::cin.get();
//}