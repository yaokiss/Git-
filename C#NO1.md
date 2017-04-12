# C#

第一节课内容

### dos命令

dir 列出当前目录下的文件及目录 directory

md  创建目录  make directory

cd  进入指定目录 change directory

cd.. 退回到上一级目录

cd\ 直接回到根目录

rd  删除目录（空目录） remove directory

del 删除文件

rmdir /s/q xxx  删除整个目录和目录下所有的目录和文件（/s 是代表删除所有子目录和文件，/q 是不要在删除是提示是否删除）

rmdir /s/q d:/xxx/yyy 删除指定磁盘的指定目录

exit 退出dos命令行

help 寻求帮助

ipconfig 获取当前主机的IP

### 配置环境变量

* 我的电脑——>属性——>高级系统设置——>环境变量——>系统环境变量——>Path

把csc.exe所在的目录粘贴到变量值里即可，注意和其他的路径用分号（;）分开。

在Windows中，C#的运行环境存在于 C:\Windows\Microsoft.NET 下。C# 的语言编译器存在于 C:\Windows\Microsoft.NET\Framework64\v4.0.30319（或v3.5）中

### 类的简单介绍

C#程序中主要包括：

* 命令空间声明（Namespace declaration）

* class 类

* Main 函数

* 字段(或变量)

* 属性

* 函数

* 语句(Statements)&表达式(Expressions)

* 注释

## C#实例

1. 实现一个可以打印"Hello World"的简单代码：

```C#
class HelloWorld
{
  static void Main(string[] args)
  {
    System.Console.WriteLine("Hello World");
  }
}
```

### 注释运用

1. 单行注释：//

1. 多行注释：/**/

### 基本输入、输出函数

输出函数System.Console.WriteLine()、 System.Console.Write()可以在控制台输出指定数据：

```C#
class HelloWorld
{
  static void Main(string[] args)
  {
    System.Console.Write("Hello World");
    System.Console.WriteLine("Hello World");
    System.Console.Write("Hello World");
  }
}
```
输入函数Console.ReadLine()可以在控制台读取键盘上的按键:

```C#
class HelloWorld
{
  static void Main(string[] args)
  {
    System.Console.ReadLine("Hello World");
  }
}
```


1. C#语言的特点（为什么能够被广泛应用）
1. C#是微软在2000年发布的一种新的面向对象（思想）语言，由安德斯·海尔斯伯格主持开发。最初叫    Cool，后来改名叫C#。

1. 学习C#语言需要一个工具叫编译器，存在于Microsoft.NET中。
   v = version。编译器版本。找csc.exe（C#语言的编译器）的工具

1. 编译器的作用compiler编译器c sharp compiler。计算机底层是如何对数据进行处理的？二进制

   hello wolrd，计算机不认识我们写好的代码。编译器可以将C#代码编译成计算机底层识别的二进制。

   查错。

1. 常用dos命令

	directory  目录

1. 环境变量：%SystemRoot%\system32;%SystemRoot%;%SystemRoot%\System32\Wbem;%SYSTEMROOT%\System32\WindowsPowerShell\v1.0\;C:\Program Files (x86)\GtkSharp\2.12\bin;C:\Program Files\TortoiseSVN\bin;C:\Program Files (x86)\Windows Kits\8.1\Windows Performance Toolkit\;C:\Program Files\Microsoft SQL Server\110\Tools\Binn\;C:\Program Files (x86)\Microsoft SDKs\TypeScript\1.0\;C:\Program Files\Microsoft SQL Server\120\Tools\Binn\

1. C#代码是以 类 的形式体现的，类是最基本的机构。类就是放代码的地方。class代表类的创建

      **编辑**   **编译**    **运行**

1. 主函数。作用是什么？一个程序必须要有一个Main方法，因为Main方法是程序的入口。

1. 符号。分号代表一句话的结束。结构语句不需要分号，要大括号，执行语句需要分号

1. 大小写，C#中严格区分大小写。文件名类名相同，代码的格式（缩进）

























































