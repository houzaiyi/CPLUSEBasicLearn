//#include <iostream>
//
//#include "InstrumentorTimer.h"
//#include "InstrumentorMacro.h"
//
//namespace Benchmark {
//    int Fibonacci(int x) {
//        std::string name = std::string("Fibonacci ") + std::to_string(x);
//        PROFILE_SCOPE(name.c_str());//��ӡÿ���̵߳�����,���巽��
//
//        std::this_thread::sleep_for(std::chrono::microseconds(1)); // Compensate statistical temporal precision problem
//
//        if (x < 3) return 1;//��ֹ�ݹ�
//        int part1 = Fibonacci(x - 1);
//
//        return part1 ;
//    }
//
//    void RunBenchmarks() {
//        PROFILE_FUNCTION();//���󷽷���timer
//
//        std::cout << "Running Benchmarks..." << std::endl;
//        std::thread t1([]() { Fibonacci(5); });// 5 4 3 
//        std::thread t2([]() { Fibonacci(6); });//6 5 4 3
//
//        t1.join();
//        t2.join();
//    }
//}
//
//int main() {
//    //chrome://tracing ������json�ļ��Ͻ�����ҳ
//    Instrumentor::BeginSession("Benchmark");//����ʱ���ʱ�� ֧�ֶ��߳�
//    Benchmark::RunBenchmarks();//����ִ�з���
//    Instrumentor::EndSession();
//    return 0;
//}
