//#include<iostream>
//
//struct AllocationMetrics  //初始化成员函数
//{
//	uint32_t TotalAllocated = 0;
//	uint32_t TotalFreed = 0;
//	uint32_t CurrentUsage() { return TotalAllocated - TotalFreed; }
//};
//static AllocationMetrics s_AllocationMetrics;//静态参数  类变量，全局
//
//void* operator new (size_t size)//void* 只是单纯返回一个指针，无类型;所有分配内存都会在这里执行
//{
//	s_AllocationMetrics.TotalAllocated += size;
//	std::cout << "new:" << size << "bytes\n";
//	return malloc(size);
//}
//void operator delete(void* memory, size_t size)//所有清楚内存的操作都会经过这里
//{
//	s_AllocationMetrics.TotalFreed += size;
//	std::cout << "delete:" << size << "bytes\n";
//	free(memory);
//}
//struct Object
//{
//	int x, y, z;
//};
//static void PrintMemoryUsage()//打印创建内存和释放内存
//{
//	std::cout << "Memory Usage:" << s_AllocationMetrics.CurrentUsage() << "bytes\n";
//}
//int main()
//{
//	PrintMemoryUsage();
//	std::string string = "赶走瞌睡虫!!!";
//	PrintMemoryUsage();
//	{
//		std::unique_ptr<Object> obj = std::make_unique<Object>();
//		PrintMemoryUsage();
//	}//自动清除了内存
//	PrintMemoryUsage();
//}