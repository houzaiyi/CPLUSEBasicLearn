#include <iostream> //Ԥ�������,�ҵ�iostream�ļ�(ͷ�ļ�)������������Ĵ��븴�ƽ���,�൱�����뷽��
#include "Log.h"

void InitLog()
{
	Log("Initialized Log");
}


void Log(const char* message) {

	std::cout << message << std::endl;
}