//#include <iostream>
//class String
//{
//public:
//	String() = default;
//	String(const char* string)//构造器，构造string,为string分配空间 const匹配左右值
//	{
//		printf("Created!\n");
//		m_Size = strlen(string);
//		m_Data = new char[m_Size];
//		memcpy(m_Data,string,m_Size);
//	}
//	String(const String& other)//复制string的值，但是会产生新的空间
//	{
//		printf("Copied!\n");
//		m_Size = other.m_Size;
//		m_Data = new char[m_Size];
//		memcpy(m_Data, other.m_Data,m_Size);
//	}
//
//	String( String&& other) noexcept//右值 临时值
//	{
//		printf("Moved!\n");
//		m_Size = other.m_Size;
//		m_Data = other.m_Data;//将值的地址复制给m_Data
//		other.m_Size = 0;//置空旧字符串
//		other.m_Data = nullptr;
//	}
//	////赋值运算符重载函数 operator=()   这个相当于自定义重载,就是重写move, str1  复制， 
//	//利用赋值运算符重载函数，解决了对象赋值时，析构函数多次释放同一块内存空间的问题
//	String& operator=(String&& other) noexcept// operator=() 它是一个赋值运算，接收一个临时对象,专门为 参数参数见移动复制准备的（自定义）
//	{
//		printf("Moved!\n");
//		if (this!=&other) {//
//			delete[] m_Data;//先置空之前留存数据,重新赋值
//			m_Size = other.m_Size;
//			m_Data = other.m_Data;//将值的地址复制给m_Data
//			other.m_Size = 0;//置空旧字符串
//			other.m_Data = nullptr;
//		}
//		return *this;
//	}
//
//	~String()
//	{
//		printf("Destoyed!\n");
//		delete m_Data;
//	}
//	void Print()
//	{
//		for (uint32_t i = 0; i < m_Size; i++)
//			printf("%c",m_Data[i]);
//		printf("\n");
//	}
//
//private:
//	char* m_Data;
//	uint32_t m_Size;
//};
//class Entity
//{
//public:
//	Entity(const String& name)
//		: m_Name(name)
//	{
//	}
//
//	Entity(String&& name)
//		: m_Name(std::move(name))//把字符串值移动过去,不是copy,之前的值没了，值到了新的地方
//	{
//	}
//	void PrintName()
//	{
//		m_Name.Print();
//	}
//private:
//	String m_Name;
//};
//
//int main()
//{
//	//*******************************构造移动复制
//	Entity entity("killey");//数据初始化的移动赋值
//	entity.PrintName();
//
//	//数值间的移动**************************
//	//String apple = "Apple";
//	////String dest((String&&)apple);//将string变为右值,调用String初始化函数，初始化dest;效果和下面move一样；原始写法
//	////String dest = std::move(apple);//变量放前面然后是新变量名，会是一个全新对象，所以会产生新对象不好
//
//	//String dest;
//	//std::cout << "Apple:";
//	//apple.Print();
//	//std::cout << "Dest:";
//	//dest.Print();
//	//dest = std::move(apple);
//	//std::cout << "Apple:";
//	//apple.Print();
//	//std::cout << "Dest:";
//	//dest.Print();
//	//std::cin.get();
//}