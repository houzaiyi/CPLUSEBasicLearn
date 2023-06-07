//#include <iostream>
//
//
//
//
//class Log //日志打印函数
//{
//public:
//	enum Level
//	{
//		LogLevelError =0, LogLevelWarning, LogLevelInfo
//	};
//	//const int LogLevelError = 0;//const 相当于final,修饰常量不可变的常量
//	//const int LogLevelWarning = 1;
//	//const int LogLevelInfo = 2;
//
//private:
//	int m_LogLevel = LogLevelInfo;
//
//public:
//	void SetLoglevel(int level)//设置日志等级
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
//public://默认是private
//	int x, y;//当前坐标
//	int speed;
//
//	void Move(int xa ,int ya) {
//	
//		x += xa * speed;
//		y += ya * speed;
//	}
//};
//
//struct StructPlayer {//结构体和类的区别就是默认不同，结构体默认是public,类是private;使用的时候设计继承的用class,如果存放一些数据类型，可以用struct; struct是为了向上兼容c,c语言中没有class
//	int x, y;//当前坐标
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
//	//log.SetLoglevel(1); //不用枚举的模式
//	log.SetLoglevel(Log::LogLevelInfo);
//	log.Error("en error");
//	log.Warn("warn,log");
//	log.Info("hi info");
//
//	//玩家移动class函数
//	//Player player;
//	//player.x = 1;
//	//player.y = 1;
//	//player.speed = 2;
//	//player.Move(1,1);//移动坐标
//
//	StructPlayer structPlayer;
//	structPlayer.x = 1;
//	structPlayer.y = 1;
//	structPlayer.speed = 2;
//	structPlayer.Move(1, 1);//移动坐标
//
//	std::cin.get();
//}
