//#include <iostream>
//class String
//{
//public:
//	String() = default;
//	String(const char* string)//������������string,Ϊstring����ռ� constƥ������ֵ
//	{
//		printf("Created!\n");
//		m_Size = strlen(string);
//		m_Data = new char[m_Size];
//		memcpy(m_Data,string,m_Size);
//	}
//	String(const String& other)//����string��ֵ�����ǻ�����µĿռ�
//	{
//		printf("Copied!\n");
//		m_Size = other.m_Size;
//		m_Data = new char[m_Size];
//		memcpy(m_Data, other.m_Data,m_Size);
//	}
//
//	String( String&& other) noexcept//��ֵ ��ʱֵ
//	{
//		printf("Moved!\n");
//		m_Size = other.m_Size;
//		m_Data = other.m_Data;//��ֵ�ĵ�ַ���Ƹ�m_Data
//		other.m_Size = 0;//�ÿվ��ַ���
//		other.m_Data = nullptr;
//	}
//	////��ֵ��������غ��� operator=()   ����൱���Զ�������,������дmove, str1  ���ƣ� 
//	//���ø�ֵ��������غ���������˶���ֵʱ��������������ͷ�ͬһ���ڴ�ռ������
//	String& operator=(String&& other) noexcept// operator=() ����һ����ֵ���㣬����һ����ʱ����,ר��Ϊ �����������ƶ�����׼���ģ��Զ��壩
//	{
//		printf("Moved!\n");
//		if (this!=&other) {//
//			delete[] m_Data;//���ÿ�֮ǰ��������,���¸�ֵ
//			m_Size = other.m_Size;
//			m_Data = other.m_Data;//��ֵ�ĵ�ַ���Ƹ�m_Data
//			other.m_Size = 0;//�ÿվ��ַ���
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
//		: m_Name(std::move(name))//���ַ���ֵ�ƶ���ȥ,����copy,֮ǰ��ֵû�ˣ�ֵ�����µĵط�
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
//	//*******************************�����ƶ�����
//	Entity entity("killey");//���ݳ�ʼ�����ƶ���ֵ
//	entity.PrintName();
//
//	//��ֵ����ƶ�**************************
//	//String apple = "Apple";
//	////String dest((String&&)apple);//��string��Ϊ��ֵ,����String��ʼ����������ʼ��dest;Ч��������moveһ����ԭʼд��
//	////String dest = std::move(apple);//������ǰ��Ȼ�����±�����������һ��ȫ�¶������Ի�����¶��󲻺�
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