# 数据类型

### 值类型：整型、浮点型、字符型(char)、布尔型(bool)、枚举型(enum)、结构型(struct)
    
    整型：byte、 sbyte、 short、 ushort、 int、 uint、 long、 ulong
    
    浮点型：float、 double、 decimal
   
### 引用类型：数组类型（array[]）、 类类型（class）、 字符串类型（string）、 接口类型（interface）、 委托类型（delegate）

* 整型

整型是常用的数据类型，表示整数，分为8种，在8种整型中每一种都有自己的取值范围，无法取到这个区间以外的值。

![](http://i2.muimg.com/591195/74fa440ea9976d8a.png)

* 浮点型

浮点型也是常用的数据类型，表示小数。比较常用的是float和double类型。double比float 类型更加精确

在保留位数上。如float为7位。不是说保留小数点后面7位有效数字，而是小数点前后的数字都包括

![](http://i2.muimg.com/591195/d8e91906c1e42d09.png)

* 布尔型（bool）

布尔型比较特殊，只有两个值（true 、 false），不能有其他的值

true表示真，false表示假

![](http://nts.newbieol.com/static/k30/unity_csharp/2,%E6%95%B0%E6%8D%AE%E7%B1%BB%E5%9E%8B/images/05.png)

* 字符型（char）

C#中的字符型是用单引号标识的。且只能含有一个比如: 'a' 、 '8' ，在内存中占用两个字节

错误的字符表示形式：'abc' 、 '123'

![](http://nts.newbieol.com/static/k30/unity_csharp/2,%E6%95%B0%E6%8D%AE%E7%B1%BB%E5%9E%8B/images/06.png)


# 常量和变量

* 变量：变量就是内存中的一块存储区域，可以不断地存储同一类型的变化的数据

* 格式：数据类型 变量名 = 初始化值

举例:
其中，int为数据类型，number为我们自己定义的变量名，10是给这个变量的初始化值。

```c#
class Demo
{
  static void Main(string[] args)
  {
    int number = 10;
    System.Console.WriteLine(number);
  }
}
```

将number变量里存储的数据变成20.

```c#
class Demo
{
  static void Main(string[] args)
  {
  int number = 10;
  number = 20;
  System.Console.WriteLine(number);
  }
}
```

除了int类型，还有很多其他的类型。

```c#
class Demo
{
    static void Main(string[] args)
    {
        //整型变量列举，注意初始化值不能超过取值范围。
        int number = 10;
        sbyte s = -3;
        short sh = 32422;
        uint ui = 15;
        long lo = 12312324;
        
        //浮点变量列举
        float f = 2.3453； //float类型的变量一定要在初始值后边加上后缀f，否则会被认为是double
        double d = 122.33; //double类型不需要加任何后缀。
        
        bool bo = true; //bool类型变量只有两个值（true或者flase）
        
        char ch = 'a';
        char c = '3';  //char类型的变量，用单引号，有且只有一个。
        
        string str = "asdasdad";
        string s = "123";          //字符串类型，
        
        System.Console.WriteLine(s);   //可以把每个变量的值都打出来。
    }
}
```

* 注意：

1. 在定义变量的时候，我们必须要明确这个变量的数据类型，来表示这个变量可以存储什么样的数据。

1. 一个变量同一时间只能存储一个数据，当存储第二个的时候，之前存储的数据就会消失，突出了"变"

1. 一般情况下，变量定义后要有初始化值（第一次给的变量值）

1. 变量的初始化值的类型要和定义的数据类型相符，也就是等号左右两边的类型要想等。

1. 浮点型变量在保留位数上有需要注意的地方，比如float为保留7位有效数字。这7位包括小数点前后的数字，举例：

```c#
class Demo
{
    static void Main(string[] args)
    {
        float f = 123.1212412f;
        double d = 124.12423523;
        System.Console.WriteLine(f);  //有效数字是7位，结果为123.1212，最后一位小数会四舍五入
        
        System.Console.WriteLine(d); // 有效数字是15~16位，都会保留
      }
}
```

在c#中可以定义无法 被改变的常量

* const 数据类型 名称 = 初始化值。

* const 是 关键字。表示值不可以被改变

```c#
class Demo
{
    static void Main(string[] args)
    {
        //  定义常量，使用const关键字，
        const int num = 10;
        num = 20;  // 提示常量无法被改变，在其他程序中也无法改变这个num的值
    }
}
```


# 练习题

定义两个int类型的变量，打印最后结果，打印变量后可以再控制台上输出：x + x = x 、 x * x = x 、 x - x = x;

```c#
class Demo
{
    static void Main(string[] args)
    {
        int a = 3, b = 4;
        System.Console.WriteLine("{0} + {1} = " +(a+b), a, b);
        System.Console.WriteLine("{0} - {1} = " +(a-b), a, b);
        System.Console.WriteLine("{0} * {1} = " +(a*b), a, b);
    }
}
```
 
 

## 类型转换

### 类型转换原因

在一般情况下，只有数据类型相同的数据才可以进行运算，通常没办法把两种数据进行计算。

程序运行过程中一定少不了数据线运算。而由于数据类型多样，经常会遇到需要运算的数据类型不一致。这就会出现类型转换。将数据类型换乘一致，也就是类型转换。

### 自动类型提升

举例：
```c#
class Demo
{
  public static void Main(string[] args)
  {
    int a = 3;  //int类型
    sbyte b = 4;  //sbyte类型
    int c = a + b;  //将两种类型的数据相加后的和赋值给int类型的c变量
    Console.WriteLine(c); //打印两个数据的和为7
  }
}
```
变量a和c为int类型站4字节，b为sbyte类型占1个字节，实际当a和b做运算时，b会自动把类型提升为int类型从而使两边类型一致。最后算出来的结果7也是int类型，
才可以赋值给变量c.系统底层自动帮我们完成的叫做自动类型提升(隐式转换)。

常见的自动类型提升：

* 所有的sbyte 、 byte 、 short 、ushort 和char都默认被提升到int类型

* 如果数据有long类型，计算结果就是long类型

* 如果数据有浮点类型，计算结果就是浮点类型。

* 如果数据有double和float类型，计算结果就是double类型

**注意：C#中，整数默认为int类型，小数默认为double类型。所以字节数比int低的整型和字节数比double低的浮点型都会自动类型提升到默认类型**

### 强制类型转换

举例：
```c#
class Demo
{
  public static void Main(string[] args)
  {
    int a = 3;  //int类型
    sbyte b = 4;  //sbyte类型
    sbyte c = a + b;  //将两种类型数据相加后的和赋值给sbyte类型的c变量，这时会报错。
  }
}
```
变量a为int类型占4个字节，b和c为sbyte类型占1字节，实际当a和b做运算时，b会自动类型提升为int类型，使得最后结果为int类型。可是变量c的类型与最后结果的类型不统一，无法将占用4字节的int类型7赋值给占用1字节的sbyte类型c。

使用强制类型转换：

```c#
class Demo
{
  public static void Main(string[] args)
  {
    int a = 3;  //int类型
    sbyte b = 4;  //sbyte类型
    sbyte c = (sbyte)(a + b); //这就是强制类型转换，将a和b的和转换为sbyte类型，并赋值给sbyte类型的c变量，注意书写格式。
  }
}
```

这就是做了强制类型转换的代码。我们需要把最后的结果进行强制转换，所以a和b要使用小括号括起来。前面的(sbyte)表示要转换为什么类型。强制转换有可能涉及到精度丢失。

注意，目前的类型转换中大部分是值类型的转换，后期我们还会学习引用类型的转换，写法上没有太大区别。


### 字符类型运算

举例：
```c#
class Demo
{
  public static void Main(string[] args)
  {	
	/*
	char ch = 'a';
	System.Console.WriteLine(ch);
	System.Console.WriteLine(ch + 1);*/
	
	char ch = '中';		//因为C#中使用Unicode码表，所以可以使用中文
	System.Console.WriteLine(ch + 0);//中字在Unicode中所对应的十进制数字，可以转换成二进制。
  }
}
```

ASCII中，字符a对应97，字符A对应65

c#中使用的是Unicode码表，当字符型数据参与数值型运算时，会自动转换为码表中对应的数值。


### 字符串与变量结合输出及占位符

如何打印语句同时输出字符串和变量
```c#
class OutputDemo
{
  public static void Main(string[] args)
  {
  	int a = 3;
	int b = 4;
  }
}

想要在控制台中输出以下内容：
a = 3

可以使用字符串连接符： + ，可以将字符串和数据（变量）相连接形成一个更大的字符串，如下：

class OutputDemo
{
  public static void Main(string[] args)
  {
  	int a = 3;
	System.Console.WriteLine("a = " + a);
  }
}

想要在控制台中输出以下内容：
a = 3, b = 4

class OutputDemo
{
  public static void Main(string[] args)
  {
  	int a = 3;
	int b = 4;
	System.Console.WriteLine("a = " + a + ", b = " + b);
  }
}
```
C#中还可以使用占位符的形式对数据进行输出，上述例子中使用占位符输出同样效果。


```c#
class OutputDemo
{
  public static void Main(string[] args)
  {
  	int a = 3;
	int b = 4;
	System.Console.WriteLine("a = {0}, b = {1}", a, b);
  }
}
```

我们可以在字符串后面依次加入需要输出的变量，然后再字符串中以{0} 、 {1}.......的形式来表示该变量，
**注意序号是从0开始的，但是顺序可以改变。**

### string类型与int类型的转换

我们可以在控制台中使用特定的函数在键盘上输入一定的内容：System.Console.ReadLine();
默认在控制台上输入的内容全都是字符串类型，有时候我们需要把字符串类型转化成int类型去做数值型的运算。我们可以使用System.Convert.ToInt32()函数将字符串类型的数字转换成int类型

```c#
class Demo
{
  public static void Main(string[] args)
  {
	string str = System.Console.ReadLine(); //控制台输入内容，用字符串类型接收
	int d = System.Convert.ToInt32(str);
	//这个函数可以将字符串类型的参数转换为int类型，把str中的字符串内容转换为int类型并用int类型接收。
	int a = 3;
	int c = a + d; //将两个int类型数据进行运算
	System.Console.WriteLine(c);  //得出结果
  }
}
```

**这个转换函数只能将只有数字的字符串类型转换**


### 练习题

1. 两个变量int a = 3, b = 4; 使用多种方法交换两个变量的值并输出如下内容：a = 4, b= 3（注意，这个题不简单）

```C#
//使用多种方法交换两个变量的值
class Exchange
{
	static void Main(string[] args)
	{
		int a = 3, b = 4;
		System.Console.WriteLine("a = {0}, a = {1}", a, b);
		System.Console.WriteLine("------");
		System.Console.WriteLine("a = {1}, b = {0}", a, b);	
		System.Console.WriteLine("a = {0}, b = {1}", b, a);
		System.Console.WriteLine("a = " + b + ", b = " + a);
	}	
}
```
2. 在键盘中输入三个数字，可以运算他们的加、减、乘三种形式得到结果，控制台得到内容为：x + x + x = x

```C#
//在键盘输入三个数，可以运算他们的加、减、乘三种形式的结果
class Input
{
	static void Main(string[] args)
	{
		//输入三个数
		string a = System.Console.ReadLine();
		string b = System.Console.ReadLine();
		string c = System.Console.ReadLine();
		//转换字符串为int类型
		int i = System.Convert.ToInt32(a);
		int j = System.Convert.ToInt32(b);
		int k = System.Convert.ToInt32(c);
		//打印输出结果
		System.Console.WriteLine("{0} + {1} + {2} = "+(i + j + k), i, j, k);
		System.Console.WriteLine("{0} - {1} - {2} = "+(i - j - k), i, j, k);
		System.Console.WriteLine("{0} * {1} * {2} = "+(i * j * k), i, j, k);
	}	
	
}
```
3. 将从键盘输入的数字先转换为int类型后再转换为string类型，最后用string类型变量接收
```C#
//键盘输入的数字先转换为int类型后在转换为string类型。最后用string类型变量接收
class Type
{
	static void Main(string[] args)
	{
		//System.Console.ReadLine();
		int a = System.Convert.ToInt32(System.Console.ReadLine());//将输入的数字转换为int类型
		string b = System.Convert.ToString(a);
		System.Console.WriteLine(b + 1);
	}	
}
```

4. 编写一个程序，运行后先打印出“How are you?”，然后按下回车后打印“I’m fine thank you and you?”

```C#
//运行后先打印"How are you?",然后按下回车在打印“I`m fine thank you and you?”
class Output
{
	static void Main(string[] args)
	{
		System.Console.WriteLine("How are you?");
		System.Console.ReadLine();
		System.Console.WriteLine("I`m fine thank you and you?");	
	}	
}
```
























  

    
