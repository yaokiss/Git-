# 数组及常见用法

### 一维数组：

数组概念：数组是同一类型数据的集合，也是一个容器

特点：

* 数组里面的数据必须是同一类型（同一种数据类型的集合）

* 数组里面的数据自带编号，编号从零开始，叫索引（角标）

定义数组的格式：元素类型[] 数组名 = new 元素类型（元素个数或数组长度）

```C#
class ArrayDemo
{
  public static void Main(string[] args)
  {
    int[] arr = new int[3]; //int类型的数组，里面有3个位置
    arr[2] = 30;//通过索引值向数组中放入元素
    arr[1] = 20;
    arr[0] = 10; //数组中的格子不一定都赋值，如果没赋值，有默认值是0
    //arr[3] = 40; //索引越界异常。IndexOutOfRangeException
    System.Console.WriteLine(arr[0]);//通过索引值打印对应的数据，输出10
    System.Console.WriteLine(arr[1]);//输出20
    System.Console.WriteLine(arr[2]);//输出30
  }
}
```
定义数组的格式二（两种）：

元素类型[] 数组名 = new 元素类型[]{元素，元素.....}
```C#
class ArrayDemo
{
  public static void Main(string[] args)
  {
    int[] arr = new int[]{10, 20, 30};
    System.Console.WriteLine(arr[0]);
    System.Console.WriteLine(arr[1]);
    System.Console.WriteLine(arr[2]);
  }
}
```
元素类型[] 数组名 = {元素, 元素….}

```C#
class ArrayDemo
{
  public static void Main(string[] args)
  {
    int[] arr = {10, 20, 30};
    System.Console.WriteLine(arr[0]);
    System.Console.WriteLine(arr[1]);
    System.Console.WriteLine(arr[2]);
  }
}
```
### 一维数组的使用

可以使用for循环或者fireach遍历一个数组里面所有的数据

数组中Length属性可以获得当前数组中所有元素个数

```C#
class ArrayDemo
{
  public static void Main(string[] args)
  {
    int[] arr = {10, 20, 30};
    for(int i = 0; i < arr.Length; i += 2) 
    {
      System.Console.WriteLine(arr[i]);
    }
  }
}
```
使用foreach循环
```C#
class ArrayDemo
{
  public static void Main(string[] args)
  {
    int[] arr = {10, 20, 30};
  
    foreach(int Ele in arr)
    {
      System.Console.WriteLine(Ele); //输出数组中每一个数据
    }
  }
}
```

### 二维数组

可以把一维数组理解成一行数据，一行里面可以放很多，而二维数组我们可以理解为一个平面，类似于表格。也就是包含行和列，及维数

二维数组的定义格式：

数据类型[,] 变量名 = {{元素1，元素2.元素3}，{元素1，元素2，元素3}，{元素1，元素2...}....}

```C#
class ArrayDemo
{
  public static void Main(string[] args)
  {
    int[,] arr = {{3,0,8}, {50,26,78}, {12,30,61}}; //定义一个3行3列的二维数组
  
    foreach(int Ele in arr)
    {
      System.Console.WriteLine(Ele); //输出数组中每一个数据
    }
  }
}
```
当我们要取出二维数组中的一个数据时，可以这样：

```C#
class ArrayDemo
{
  public static void Main(string[] args)
  {
    int[,] arr = {{3,0,8}, {50,26,78}, {12,30,61}}; //定义一个3行3列的二维数组
  
    System.Console.WriteLine(arr[0, 2]);//打印8
  }
}
```
其他格式：数据类型[,] 变量名 = new int[列数,行数];

```C#
class ArrayDemo
{
  public static void Main(string[] args)
  {
    int[,] arr2 = new int[3, 4]; //定义一个3行4列的数组，但没有添加数据
    arr[0, 0] = 10; //添加数据
    System.Console.WriteLine(arr[0, 0]); //打印为10
  }
}
```



















































