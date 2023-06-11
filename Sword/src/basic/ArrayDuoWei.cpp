//#include <iostream>
//
//int main()
//{
//	int** a2d = new int*[50];//存放数组的指针数组,二维数组
//	for (int i = 0; i < 50; i++)
//		a2d[i] = new int[50];
//
//	for (int i = 0; i < 50; i++)
//		delete[] a2d[i];//释放内存时，先释放内部，最外部最后释放
//	delete[] a2d;
//
//	std::cin.get();
//}