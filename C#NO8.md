# 字符串处理

## String和StringBuilder

### 字符串的常见特征及处理

* C#中字符要用单引号标识，为char类型，比如'a'  '4'  '!'。单引号中能且仅放一个字符。

* 字符串属于引用数据类型，用双引号标识，但大多数对于字符串的使用和值都比较像：
```C#
class StringOpeDemo
{
  public static void Main(string[] args)
  {
    char ch = 'a';
    string str = "hello";
  }
}
值类型和string类型的变量的声明格式类似。
```

* 单个字符也可以用双引号标识起来，依旧标识为字符串，还可以长度为0的字符串，表示为:""(双引号中什么都没有)
```C#
class StringOpeDemo
{
  public static void Main(string[] args)
  {
    string ch = "a";  //单个字符用双引号标识，也是字符串
    string str = "";  //长度为0的字符串
  }
}
```

* 字符串是由一个个的字符连接起来的，可以看作是字符的数组，所以字符串中由Length属性，表示这个字符串的长度，也就是字符的个数。
```C#
class Demo
{
  public static void Main(string[] args)
  {
    string str = "hello world";   //str可以看作是一个由字符组成的数组
    Console.WriteLine(str.Length);  //打印结果为11，即str的长度为11，里面一共有11个字符（包括空格）

    char ch = str[1];   //把数组中索引为1的字符取出。
    Console.WriteLine(ch);    //打印 字符为 'e'

    /*遍历一个字符串中的每一个字符*/
    for(int i = 0; i < str.Length; i++)
    {
      System.Console.WriteLine(str[i]);//依次输出字符串中的内容
    }
  }
}
```
* 字符串有一个重要的特性，不可变性，也就是说，字符串一旦声明后就不可改变，类似的代码：
```C#
class Demo
{
  public static void Main(string[] args)
  {
    string str = "abc";
    str = "nba";
    //str明明变化了！从"abc"变成了"nba"！
  }
}
```
从代码的表面来看确实变化了。但实际上真的没有变，那是因为字符串string是引用数据类型，每当创建一个字符串的时候都会在内存中开辟空间分配地址创建一个字符串对象，然后将这个对象的地址赋值。
值给变量。当我们重新创建一个字符串的时候，在代码上看到的是将字符串赋值给相同的变量。实际上是将新字符串的地址值赋值给了变量。也就是说，同一个str变量先后两次被两个不同字符串的地址赋值。
变得只是该变量所引用的地址值。而字符串本身在内存中确实是没有变化的，两个独立的字符串，这就是字符串的不可变性，一旦声明了一个字符串，将无法被变更。

* 引用类型。引用的是数据的地址值。而不是数据本身；只有值类型才是直接将值赋值给变量本身。

string 类封装了大量的属性和方法可以对字符串操作。
```C#
常用属性：
Length  获取当前 String 对象中的字符数。

常用方法：
ToLower()   得到字符串的小写形式。
ToUpper()   得到字符串的大写形式.
Trim()      去掉字符串两端的空白。
Replace(string oldValue, string newValue)   将字符串中的出现oldValue的地方替换为newValue
Substring(int startIndex)   取从位置startIndex开始一直到最后的子字符串
Substring(int startIndex, int length)   取从位置startIndex开始长度为length的子字符串
Contains(string value)    判断字符串中是否含有子串value
StartsWith(string value)  判断字符串是否以子串value开始
EndsWith (string value)   判断字符串是否以子串value结束
IndexOf(string value)     取子串value第一次出现的位置
IsNullOrEnmpty(string)    静态方法，判断是否为空或长度为0 的字符串（null和""）
Equals(string, StringComparison.OrdinalIgnoreCase)    两个字符串进行不区分大小写的比较
Split(params char[] separator) //此方法是传入数组型参数，后期会将
Split(char[] separator, StringSplitOptions options) //StringSplitOptions枚举中有备选项，可以选择以什么样的方式进行分割
Split(string[] separator, StringSplitOptions options)

注意，String类中的所有对于字符串操作的方法，本质上不是操作的字符串本身，而是重新创建了一个新的操作后的字符串。
```

String使用举例：
```C#
class StringOpeDemo
{
  public static void Main(string[] args)
  {
    //得到字符串的小写形式
    string str = "HELLO";
    string s = str.ToLower();
    System.Console.WriteLine(s);//输出hello

    string str1 = "www.baidu.com";
    string s1 = str.Substring(4, 5);//截取从索引4开始后5个字符的子字符串
    System.Console.WriteLine(s1);//输出baidu
  }
}
```
```C#
using System;
class Demo
{
	static void Main(string[] args)
	{
		str();	
		str1();	
		str2();
		str3();
		str4();
	}
	static void str()
	{
		string str = "Hello World";
		string s = str.ToUpper();   //字符串大写
		string st = str.ToLower();	//字符串大写
		Console.WriteLine(s);		
		Console.WriteLine(st);
		Console.WriteLine(str.Length);		//获取字符数	
	}
	static void str1()
	{
		Console.WriteLine("---------------1");
		string str = "      Hello World      ";
		Console.WriteLine(str.Length); 
		string s = str.Trim();//去掉字符串两端的空白
		Console.WriteLine(s);	
	}
	static void str2()
	{
		Console.WriteLine("---------------2");
		string str = "Hwllo Worle";
		string s = str.Replace("Hwllo Worle", "Hello World");	//将出错的地方替换
		Console.WriteLine(s);
	}
	static void str3()
	{
		Console.WriteLine("---------------3");
		string str = "Hello World";
		string s = str.Substring(2); //从该位置开始到最后的字符串
		string st = str.Substring(1,6); //取从1开始到6之间的字符串
		Console.WriteLine(s);
		Console.WriteLine(st);
	}
	static void str4()
	{
			Console.WriteLine("---------------4");
			string str = "Hello World";
			bool s = str.Contains("llo"); //判断这个字符串中否含有"llo"
			Console.WriteLine(s);
			bool ss = str.StartsWith("He");  //判断这个字符串是否是以"He"开始的
			Console.WriteLine(ss);
			bool st = str.EndsWith("d"); //判断这个字符串是不是以"d"结束的
			Console.WriteLine(st);
			int t = str.IndexOf("e");		//判断字符串中"e"第一次出现的位置
			Console.WriteLine(t);	
	}
}
```
```C#
class StringDemo
{
  static void Main(string[] args)
  {
		Show3();
		//大写String和小写string没区别
  }
  
  static void Show1()
  {
  	string str = "hello world";
  	
  	bool bo = str.Contains("wold");
  	System.Console.WriteLine(bo);
  }
  
  static void Show2()
  {
  	string str = "hel,l.o w!o,rld";
  	string[] arr = str.Split(new char[]{',', '.'});
  	foreach(string a in arr)
  	{
  		System.Console.WriteLine(a);
  	}
  }
  
  static void Show3()
  {
  	string str = "      h el   o     w     ";
  	string s = str.Trim();

  	System.Console.WriteLine(s);

  }
}
```































































