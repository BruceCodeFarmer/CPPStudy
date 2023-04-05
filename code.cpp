// 信奥NOIP1-1-1-初识C++主程序
/*
 * C++ 是一种高级语言，它是由 Bjarne Stroustrup 于 1979 年在贝尔实验室开始设计开发的。
 * C++ 进一步扩充和完善了 C 语言，是一种面向对象的程序设计语言。
 * C++ 可运行于多种平台上，如 Windows、MAC 操作系统以及 UNIX 的各种版本。
*/
// C++运行程序先要转换成汇编语言（操作系统语言），再转换成机器语言（010101）
// 编译或者运行速度取决于电脑性能，包括CPU，RAM等等
// 注释方法1：双右斜杠，适用于单行注释
/* 注释方法2：右斜杠+*，最后*+右斜杠，适用于多行注释 */
// 第一个程序：在控制台中输出"Hello, world!"
/*
#include<iostream>   // 头文件
using namespace std;   // 命名空间，不会让重复内容造成歧义

int main()   // 主函数（程序）
{
    cout<<"Hello, world!"<<endl;   // 在控制台中输出（输出流），组成部分会输出流+输出流符号
    cout<<1+1<<endl;   // 在控制台中输出1+1的和，这是算术运算
    cout<<"计算"<<123<<"+"<<456<<"的结果是"<<123+456<<endl;   // 这也是算数运算，但是其中加入了模板，打印结果为"计算123+456的结果是:..."
    return 0;   // 用return结束程序
}
 */

// 第二个程序：在控制台中输出三角形，矩形和勾
// 此程序没有注释
/*
#include<iostream>
using namespace std;

int main()
{
    cout<<"三角形："<<endl;
    cout<<"*"<<endl;
    cout<<"**"<<endl;
    cout<<"***"<<endl;
    cout<<"矩形："<<endl;
    cout<<"***"<<endl;
    cout<<"***"<<endl;
    cout<<"***"<<endl;
    cout<<"勾："<<endl;
    cout<<"     *"<<endl;
    cout<<"*   *"<<endl;
    cout<<" * *"<<endl;
    cout<<"  *"<<endl;
    return 0;
}
*/
// 第三个程序：应用程序
#include<iostream>
using namespace std;

int main()
{
    cout<<(1 + 3) * 2<<endl;
    return 0;
}