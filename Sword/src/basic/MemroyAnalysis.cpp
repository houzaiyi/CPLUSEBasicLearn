//#include<iostream>
//
//struct AllocationMetrics  //��ʼ����Ա����
//{
//	uint32_t TotalAllocated = 0;
//	uint32_t TotalFreed = 0;
//	uint32_t CurrentUsage() { return TotalAllocated - TotalFreed; }
//};
//static AllocationMetrics s_AllocationMetrics;//��̬����  �������ȫ��
//
//void* operator new (size_t size)//void* ֻ�ǵ�������һ��ָ�룬������;���з����ڴ涼��������ִ��
//{
//	s_AllocationMetrics.TotalAllocated += size;
//	std::cout << "new:" << size << "bytes\n";
//	return malloc(size);
//}
//void operator delete(void* memory, size_t size)//��������ڴ�Ĳ������ᾭ������
//{
//	s_AllocationMetrics.TotalFreed += size;
//	std::cout << "delete:" << size << "bytes\n";
//	free(memory);
//}
//struct Object
//{
//	int x, y, z;
//};
//static void PrintMemoryUsage()//��ӡ�����ڴ���ͷ��ڴ�
//{
//	std::cout << "Memory Usage:" << s_AllocationMetrics.CurrentUsage() << "bytes\n";
//}
//int main()
//{
//	PrintMemoryUsage();
//	std::string string = "�����˯��!!!";
//	PrintMemoryUsage();
//	{
//		std::unique_ptr<Object> obj = std::make_unique<Object>();
//		PrintMemoryUsage();
//	}//�Զ�������ڴ�
//	PrintMemoryUsage();
//}