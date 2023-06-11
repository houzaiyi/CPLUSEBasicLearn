//#include <iostream>
//
//#include "InstrumentorTimer.h"
//#include "InstrumentorMacro.h"
//
//namespace Benchmark {
//    int Fibonacci(int x) {
//        std::string name = std::string("Fibonacci ") + std::to_string(x);
//        PROFILE_SCOPE(name.c_str());//打印每个线程的名字,具体方法
//
//        std::this_thread::sleep_for(std::chrono::microseconds(1)); // Compensate statistical temporal precision problem
//
//        if (x < 3) return 1;//中止递归
//        int part1 = Fibonacci(x - 1);
//
//        return part1 ;
//    }
//
//    void RunBenchmarks() {
//        PROFILE_FUNCTION();//外层大方法的timer
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
//    //chrome://tracing 将生成json文件拖进该网页
//    Instrumentor::BeginSession("Benchmark");//定义时间计时器 支持多线程
//    Benchmark::RunBenchmarks();//具体执行方法
//    Instrumentor::EndSession();
//    return 0;
//}
