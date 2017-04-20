# 函数

* 函数的概念：

函数就是定义在类中具有特定功能的一段独立的程序  也称方法

函数可以帮助我们把功能性、逻辑性的代码进行封装，从而实现重复调用，提高程序的复用性和效率

```C#
定义函数的格式：
修饰符 返回值类型 函数名(参数类型 形式参数1, 参数类型 形式参数2, ..., 参数类型 形式参数n)
{
  执行语句;
  return 返回值;
}
```

* 修饰符：修饰这个是什么样的函数，可以有多个修饰符。

* 返回值类型：取决于返回值的类型。

* 函数名：函数的名字，一定按照命名规范起名，表明函数的作用

* 参数列表（小括号中的内容）：定义这个函数所需要的参与运算的位置数据，并且每一个数据都要有相应的数据类型，可以理解为变量。

* return： 表示将返回值返回的动作，会把返回值返回到调用者，同时还能结束函数功能。

* 返回值：表示这个函数运行后最后的结果；

## 函数的用法

当函数定义完成后，就可以调用这个函数执行一定的功能。

```C#
class Demo
{
  static void Main(string[] args)
  {
    int sum = Add(3, 4);  //调用函数，并传入3和4两个值。把得到的返回值赋值给另一个变量。
    Console.WriteLine(sum);
  }

//定义函数，具有算两个任意整数和的功能。
  static void Add(int a, int b)
  {
    return a + b; //因为有返回值，会把最后结果返回给调用者。
  }
}
```

**注意：函数的返回值有无要根据函数具体功能而定，如果没有返回值，那么返回值类型要写void，void也是关键字**

```C#
class Demo
{
  static void Main(string[] args)
  {
    Print();//调用函数，直接打印hello world
  }
  
  static void Print()  //函数也可以不放参数
  {
    System.Console.WriteLine("hello world");
  }
}
```

## 函数的特点

* 定义函数可以将功能代码进行封装

* 定义函数便于对该功能进行复用。

* 函数的出现提高了代码的复用性。

* 函数只有被调用才会执行。

* 如果函数没有具体的返回值，返回值类型用关键字void表示，那么函数中的return语句可以省略不写

* return有两个作用，1：返回值。 2：结束函数功能

** 函数只能调用其他函数，不能再函数内定义函数，**

** 定义函数时，函数的结果应该返回给调用者，交给调用者处理**

```C#
/*
函数：定义在类里面的具有特定功能的独立程序，也叫方法

static，修饰符（很多），静态的
*/

class MethodDemo
{
  static void Main(string[] args)
  {
  	/*
		int a = 3;
		int b = 4;
		int c;
		c = a + b;
		
		
		int a = Add(3, 4);//调用Add功能，当调用时，应该传入具体的值
		int b = Add(10, 20);//10和20是实参，实际参数
		int c = Add(100, 200);
		System.Console.WriteLine(Add(3, 4));
		System.Console.WriteLine(Add(10, 20));
		System.Console.WriteLine(Add(100, 200));
		
		System.Console.WriteLine("============");
		
		Print(10, 20);
		
		for(int i = 0; i < 9; i++)
		{
			PrintHello();
		}*/
		
		//System.Console.WriteLine(Print(1, 2));
		System.Console.WriteLine(Show(10));
  }
 
/*
定义函数的格式：
修饰符 返回值类型 函数名(参数类型 形式参数1, 参数类型 形式参数2, ..., 参数类型 形式参数n)
{
  执行语句;
  return 返回值;
}
参数：参与运算的数据
形参：形式参数，是在定义函数是的参数
return：返回，可以将方法的结果返回给调用者，写在函数的最后；结束函数。
*/ 

  //定义一个功能，可以算任意两个数的和
  static int Add(int a, int b)
  {
  	int c = a + b;//执行语句
  	return c;//return可以将结果返回给调用者
  }
  
  //如果一个方法没有返回值，那么C#中只有一个关键字可以表示 void
  static void Print(int a, int b)
  {
  	System.Console.WriteLine(a + b);
  	//return;
  }
  
  static void PrintHello()
  {
  	System.Console.WriteLine("hello");	
  }
  
  static double Show(int a)
  {
  	System.Console.WriteLine(a);
  	return 2.5;
  }
}
//在后面写的所有代码都需要通过定义方法来实现
/*
如何定义函数：两个明确：
1，明确这个函数的功能是什么，明确你想要什么结果（返回值和返回值类型）
2，明确这个函数的功能在实现中是否有未知数据参与运算（参数）
*/
```



## 函数重载

* 概念：重载（overload）：同一个类中允许存在一个以上的同名函数，只要他们的参数个数或者参数类型不同即可

重载表现形式：
```C#
/获取两个整数的和
public int add (int x, int y)
{
  return x + y;
}

//获取两个小数的和
public double add (double x, double y)
{
  return x + y;
}

//获取三个整数的和
public int add (int x, int y, int z)
{
  return x + y + z;
}

注意，以上必须要出现在同一个类中，才可以叫重载
```
重载提高了程开发效率，明确了方法的命名。

```C#
/*
函数的重载：同一个类中允许存在一个以上的同名函数，只要他们的参数列表不同。
参数列表不同：参数类型和参数的个数。

同一个函数被重复载入了多次.
函数的重载和返回值类型无关。

打印99乘法表.
要求通过输入1-9中的数字打印到该数字的乘法表，当不输入数字时，打印9的

Main(...);
*/

class OverloadDemo
{
  static void Main(string[] args)
  {
		//double a = Add(3, 4);
		//double b = Add(2.5, 3.6);
		//int c = Add(3, 4, 5);
		//System.Console.WriteLine(a);
		//System.Console.WriteLine(b);
		//System.Console.WriteLine(c);
		Print99(5);
		Print99();
  }
  
  //获取任意两个整数的和
  static int Add(int x, int y)
	{
	  return x + y;
	}
	
	//获取两个小数的和
	static double Add(double x, double y)
	{
	  return x + y;
	}
	
	//获取三个整数的和
	static int Add(int x, int y, int z)
	{
	  return x + y + z;
	}
	
	//以下也可以形成重载
	static double Add(int a, double b)
	{
		return a + b;
	}
	
	static double Add(double a, int b)
	{
		return a + b;
	}
	
	static void Print99()
	{
		Print99(9);
	}
	
	static void Print99(int i)
	{
		Add(10, 20);
		for(int a = 1; a <= i; a++)
		{
			for(int b = 1; b <= a; b++)
			{
				System.Console.Write("{0}*{1}={2}\t", b, a, a * b);
			}	
			System.Console.WriteLine();
		}	
	}
}
```











































