//#include <iostream>
//#include <string>
//
//class Entity
//{
//private:
//	int* m_X, *m_Y;  //���y����*�� ���Ǹ�����
//	std::string m_Name;
//	mutable int m_DebugCount = 0;	//mutable��const�ķ�ת����˼�ǿɸı��
//public:
//	const int* const GetX() const //��˼�Ƿ�����һ�������޸ĵ�ָ��;���ݺ͵�ַ���������޸�  ���������const��������ŵ�������ᱻ�޸�
//	{
//		return m_X;
//	}
//
//public:
//	const std::string& GetName() const //��ŵ�಻�����
//	{
//		m_DebugCount++;//��Ϊ��mutable,������������޸�
//		return m_Name;
//	}
//};
//
//int main()
//{
//	
//	const int Max_Age = 90;
//
//	//const�� *ǰ�����ݣ���*������ַ
//	int const* a = new int; //������ const int* aд��Ч����ͬ
//	//const int* a = new int;//���const����д*a = 2; �޷��޸�(�������˵�ַû��)����Ϊa��ֵ��ʵ���ڴ��ַ�ϵ�����; ���ǿ��Ը������ĵ�ַָ��
//
//
//	 //int* const a = new int;//���const����д*a = 2����;; ���ǲ����Ը������ĵ�ַָ��(��ַ����,����û��)
//
//	//*a = 2;
//	a = (int*)&Max_Age; 
//}