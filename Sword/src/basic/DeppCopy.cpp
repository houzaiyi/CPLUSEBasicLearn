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
//		std::cout << "��ʼ��!" << std::endl;
//
//		m_Size = strlen(string);
//		m_Buffer = new char[m_Size + 1];
//		memcpy(m_Buffer, string, m_Size + 1);
//	}
//
//	String(const String& other)//��ȿ���,���⿽��һ��ֵһ�� �Ķ���
//		:m_Size(other.m_Size)
//	{
//		m_Buffer = new char[m_Size + 1];
//		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
//	}
//
//	~String()
//	{
//		std::cout << "��������ʱ�������������!" << std::endl;
//		delete[] m_Buffer;
//	}
//
//
//	friend std::ostream& operator<<(std::ostream& stream, const String& string);//��Ա,��Ҫ��Ϊ�˴�ӡ˽�б���
//
//};
//
//std::ostream& operator<<(std::ostream& stream, const String& string)//��Ա,��Ҫ��Ϊ�˴�ӡ˽�б���
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