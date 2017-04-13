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
 



























  

    
