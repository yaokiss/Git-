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





























  

    
