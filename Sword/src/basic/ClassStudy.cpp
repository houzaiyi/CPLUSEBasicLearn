//#include <iostream>
//
//
//
//
//class Log //��־��ӡ����
//{
//public:
//	enum Level
//	{
//		LogLevelError =0, LogLevelWarning, LogLevelInfo
//	};
//	//const int LogLevelError = 0;//const �൱��final,���γ������ɱ�ĳ���
//	//const int LogLevelWarning = 1;
//	//const int LogLevelInfo = 2;
//
//private:
//	int m_LogLevel = LogLevelInfo;
//
//public:
//	void SetLoglevel(int level)//������־�ȼ�
//	{
//		m_LogLevel = level;
//	}
//	void Error(const char* message)
//	{
//		if(m_LogLevel>= LogLevelError)
//			std::cout << "[ERROR]:" << message << std::endl;
//		
//	}
//	void Warn(const char* message)
//	{
//		if (m_LogLevel >= LogLevelWarning)
//			std::cout << "[WARNING]:" << message << std::endl;
//		
//	}
//	void Info(const char* message)
//	{
//		if (m_LogLevel >= LogLevelInfo)
//			std::cout << "[INFO]:" << message << std::endl;
//	}
//};
//
//
//class Player {
//public://Ĭ����private
//	int x, y;//��ǰ����
//	int speed;
//
//	void Move(int xa ,int ya) {
//	
//		x += xa * speed;
//		y += ya * speed;
//	}
//};
//
//struct StructPlayer {//�ṹ�������������Ĭ�ϲ�ͬ���ṹ��Ĭ����public,����private;ʹ�õ�ʱ����Ƽ̳е���class,������һЩ�������ͣ�������struct; struct��Ϊ�����ϼ���c,c������û��class
//	int x, y;//��ǰ����
//	int speed;
//
//	void Move(int xa, int ya) {
//
//		x += xa * speed;
//		y += ya * speed;
//	}
//};
//
//int main()
//{
//
//	Log log;
//	//log.SetLoglevel(1); //����ö�ٵ�ģʽ
//	log.SetLoglevel(Log::LogLevelInfo);
//	log.Error("en error");
//	log.Warn("warn,log");
//	log.Info("hi info");
//
//	//����ƶ�class����
//	//Player player;
//	//player.x = 1;
//	//player.y = 1;
//	//player.speed = 2;
//	//player.Move(1,1);//�ƶ�����
//
//	StructPlayer structPlayer;
//	structPlayer.x = 1;
//	structPlayer.y = 1;
//	structPlayer.speed = 2;
//	structPlayer.Move(1, 1);//�ƶ�����
//
//	std::cin.get();
//}
