//#include <iostream> //预处理语句,找到iostream文件(头文件)，并把他里面的代码复制进来,相当于引入方法
//#include <string> 
//using namespace std;
//int main()
//{
//    //sizeof关键字可统计数据类型所占用的内存大小 sizeof(数据类型) 或 sizeof(变量名)
//    
//
//
//    //整型************* 不同整型占用的内存空间比较：short < int <= long <= long long
//    short variableShort = 5;//短整型  2字节  -21^15 --  21^15-1
//    int variableInt = 5;//整型      4字节  -21^31 --  21^31-1
//    long variableLong = 5;//长整型   Windows为4字节，Linux为4字节(32位)，8字节(64位)  -21^31 --  21^31-1
//    long long variableLongL = 5;//长长整型      8字节  -21^63 --  21^63-1
//
//    //浮点型************* 不同整型占用的内存空间比较：float < double
//    float variableF = 5;//单精度       4字节   7位有效数字
//    double variableD = 5;//双精度      8字节   15-16位有效数字 
//
//    //字符型****************************************** 字符型变量只占用1个字节(单引号内只能有一个字符)。 字符型变量是将对应的ASCII编码存放至内存，而不是字符本身
//    char variableChar = 'A';//双精度      8字节   15-16位有效数字 
//
//    
//    //字符串型**************************** C风格字符串： char 变量名[] = "字符串值";   （2）C++风格字符串： string 变量名 = "字符串值";(使用C++风格字符串时，需包含头文件#include <string> 以及(using namespace std;)。)
//    char variablecStr[] = "hellow c str";
//    string cppStr = "hellowstr";
//
//
//    //布尔类型 bool 占一个字节，只有两个值 true(非0);false(0)   
//
//    bool flage = true;
//
//    std::cout << cppStr << std::endl;
//    std::cin.get();
//}