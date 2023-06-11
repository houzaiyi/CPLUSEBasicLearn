//#include <iostream>
//#include <string>
//
//
//
//class String
//{
//private:
//	char* m_Buffer;
//	unsigned int m_Size;
//public:
//	String(const char* string)
//	{
//		std::cout << "初始化!" << std::endl;
//
//		m_Size = strlen(string);
//		m_Buffer = new char[m_Size + 1];
//		memcpy(m_Buffer, string, m_Size + 1);
//	}
//
//	String(const String& other)//深度拷贝,另外拷贝一个值一样 的对象
//		:m_Size(other.m_Size)
//	{
//		m_Buffer = new char[m_Size + 1];
//		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
//	}
//
//	~String()
//	{
//		std::cout << "函数销毁时候调用析构函数!" << std::endl;
//		delete[] m_Buffer;
//	}
//
//
//	friend std::ostream& operator<<(std::ostream& stream, const String& string);//有员,主要是为了打印私有变量
//
//};
//
//std::ostream& operator<<(std::ostream& stream, const String& string)//有员,主要是为了打印私有变量
//{
//	stream << string.m_Buffer;
//	return stream;
//}
//void PrintString(const String& string)
//{
//	std::cout << string << std::endl;
//}
//
//
//int main()
//{
//	{
//		String string = "hzy";
//		String ff = string;
//		PrintString(string);
//		PrintString(ff);
//	}
//
//std::cin.get();
//}