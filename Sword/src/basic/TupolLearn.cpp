//#include <iostream>
//#include <string>
//#include<tuple>
//
// //tuple����(Ԫ��), �Ǳ�ʾԪ������, �ǲ������κνṹ��,���ٶ�����(��������, quick and dirty)��, �������ں������ض������ֵ;
//std::tuple<std::string, int> CreatePerson()//�ṹ����,���ض������
//{
//	return {"hzy",25};
//}
//int main()
//{
//    std::tuple<std::string,int> person = CreatePerson();//ԭʼд��
//	std::string& nameOrang = std::get<0>(person);
//	int ageOrang = std::get<1>(person);
//	auto [name, age] = CreatePerson();//17��������� auto
//	std::cout << nameOrang;
//}