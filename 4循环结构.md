# 循环结构

* 流程控制：循环结构
* while循环
* do..while循环
* for循环
* foreach(后期学习)
* break关键字
* continue关键字

## while循环

while循环语句格式：

```C#
while(条件表达式)
{
  循环体；
}
```

举例：
```C#
class WhileDemo
{
  public static void Main(string[] args)
  {
    int a = 1;

    while(a < 3)	//是否循环要看条件表达式的最后结果
    {
      System.Console.WriteLine("hello world");
      a++; //使用自增符号表示a的增量
    }
    System.Console.WriteLine("haha");
  }
}
结果为2次hello world和1次haha
```

do..while循环语句格式：
```C#
do
{
  循环体；
}
while(条件表达式)；
注意和while的区别。
```
举例：
```C#
class WhileDemo
{
  public static void Main(string[] args)
  {
    int a = 3;
		
    do
    {
      a++;
      System.Console.WriteLine("hello");
    }
    while(a < 3);
  }
}
结果为2次hello
```
for循环结构语句
```C#
for(初始表达式;条件表达式;循环后的操作表达式)
{
  循环体;
}
```
举例：
```C#
class WhileDemo
{
  public static void Main(string[] args)
  {
    for(int a = 1; a < 3; a++)
    {
      System.Console.WriteLine("hello");
    }
  }
}
```
for 循环中存在一种特殊的格式嵌套循环：
```C#
for(初始化表达式; 条件表达式; 循环后的操作表达式)
{
  for(初始化表达式; 条件表达式; 循环后的操作表达式)
  {
    执行语句;
  }
}
```

举例：
```C#
class ForDemo
{
  public static void Main(string[] args)
  {
    for(int a = 1; a < 3; a++)
    {
      for(int b = 1; b < 4; b++)
      {
        System.Console.WriteLine("hello");
      }
    }
    //结果是打印6个hello
  }
}
```
## break

break,跳出,引用于循环结构和选择结构，作用是跳出所在并终结所在循环

```C#
class ForDemo
{
  public static void Main(string[] args)
  {
    for(int a = 1; a < 3; a++)
    {
      System.Console.WriteLine("hello");

      if(a == 1)
      {
        break;
      }
    }
  }
}
结果为打印1次hello
```
break要和其他语句结合使用，可以避免警告

```C#
class ForDemo
{
  public static void Main(string[] args)
  {
    for(int a = 1; a < 3; a++)
    {
      for(int b = 1; b < 4; b++)
      {
        System.Console.WriteLine("11111");
        break;
      }
    }
  }
}
break只会跳出它所在的循环
```

## continue

continue 继续，应用于循环结构，作用是结束本次循环执行下一次循环

```C#
class WhileDemo
{
  public static void Main(string[] args)
  {
    for(int a = 1; a <= 11; a++)
    {
      if(a % 2 == 0)
      {
        continue;
      }
      else
      {
        System.Console.WriteLine(a);
      }
    }
  }
}
结果为打印出1~11之间所有的奇数
```
continue正常情况下和分支结构结合使用，一般不单独使用

**注意，break和continue都是关键字， 同时也都可以单独成句。如果这两个语句离开了应用范围将没有意义**


















































