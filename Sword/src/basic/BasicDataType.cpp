//#include <iostream> //预处理语句,找到iostream文件(头文件)，并把他里面的代码复制进来,相当于引入方法
//#include <string> 
//using namespace std;
//
//
//void Increment(int* value) //创建一个value指针
//{
//    (*value)++;    //逆向根据地址取出值，进行数值修改
//}
//
//void ReferIncrement(int& value) //创建一个value的引用
//{
//    value++;    //逆向根据地址取出值，进行数值修改
//}
//
//int main()
//{
//    //sizeof关键字可统计数据类型所占用的内存大小 sizeof(数据类型) 或 sizeof(变量名)
//    
//
//
//    ////整型************* 不同整型占用的内存空间比较：short < int <= long <= long long
//    //short variableShort = 5;//短整型  2字节  -21^15 --  21^15-1
//    //int variableInt = 5;//整型      4字节  -21^31 --  21^31-1
//    //long variableLong = 5;//长整型   Windows为4字节，Linux为4字节(32位)，8字节(64位)  -21^31 --  21^31-1
//    //long long variableLongL = 5;//长长整型      8字节  -21^63 --  21^63-1
//
//    ////浮点型************* 不同整型占用的内存空间比较：float < double
//    //float variableF = 5;//单精度       4字节   7位有效数字
//    //double variableD = 5;//双精度      8字节   15-16位有效数字 
//
//    ////字符型****************************************** 字符型变量只占用1个字节(单引号内只能有一个字符)。 字符型变量是将对应的ASCII编码存放至内存，而不是字符本身
//    //char variableChar = 'A';//    1字节  8 位   
//
//    //
//    ////字符串型**************************** C风格字符串： char 变量名[] = "字符串值";   （2）C++风格字符串： string 变量名 = "字符串值";(使用C++风格字符串时，需包含头文件#include <string> 以及(using namespace std;)。)
//    //char variablecStr[] = "hellow c str";
//    //string cppStr = "hellowstr";
//
//
//    ////布尔类型 bool 占一个字节，只有两个值 true(非0);false(0)   
//
//    //bool flage = true;
//   
//   //******************************指针就是保存内存地址的整数(int)，一条街道上的一个住户的地址。  
// 
//     //创建一个指针(自己向电脑内存申请一个内存地址，电脑给你分配空间后给你一个地址，让你来找到它。)
//    // &a   意思是hia小a你好请问你的地址是什么，获得地址。
//    // *a   意思是逆向调用你的地址，操控你的数值。
//    //创建一个无类型的指针
//    //void* = 
//    //创建一个双指针，就是 a的指针-->b的指针-->b的地址； 其实就是a的地址指向的是b。
//    //char* buffer = new char[8];
//    // memset作用是将某一块内存中的内容全部设置为指定的值， 这个函数通常为新申请的内存做初始化工作。
//    //memset(buffer,0,8);
//    //buffer地址是:0x000002007611c080
//    //char** ptr = &buffer;
//    //delete[] buffer; //释放内存
//    //ptr 的地址是其实也是 0x000002007611c080
//
//    int a = 5;
//    //Increment(&a); //传入a的地址,指针写法
//
//    //*******************初始化引用必须给他赋值，指针和引用没什么区别，引用可以让代码更简洁
//
//    ReferIncrement(a); //传入a的地址,引用写法  改变一个数的值，必须要有地址，用地址找到侯进行操作
//
//
//    std::cout << a << std::endl;
//
//
//    std::cin.get();
//}