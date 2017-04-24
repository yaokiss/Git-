# 查询MSDN

* 面向对象可以简单理解为面对着对象，直接操作对象。

我们可以把对象理解为生活中的物体（实体），他们会把有关自己的信息封装到自身，这样我们一旦找到一个对象就可以获取有关它的所有信息和功能。

比如桌子，我们能描述它的形状，颜色等，它还有一定的功能，盛放物品等。所以我们向使用桌子的功能，要先找到桌子。

在C#语言中也一样，C#将很多实体描述成对象，从而可以通过获取相应的对象得到其功能。

### 面对对象的举例

* 当我们去饭店吃饭时，点菜要找服务员，因为服务员具有点菜的功能
* 如果家里的下水道堵塞，我们很难自己处理，要找专业的工人帮助，因为他们具有专业的功能
* 如果我们要组装一台心仪的电脑，需要找专业的人员，不但我们省事省力还不会出差错
* 面试官面试应聘者不是因为他不能胜任应聘者的工作，而是应聘者具备完成任务的能力可以加快项目的进展提高效率

## 查询MSDN之.NET Framework类库

在.NET类库中比较常用的内容：
Console类：
* Write()
* WriteLine()
```C#
class Demo
{
  public static void Main(string[] args)
  {
    System.Console.BackgroundColor; //获取控制台的颜色
    System.Console.WriteLine(System.Console.BackgroundColor); //打印控制台颜色，Black
    System.Console.BackgroundColor = System.ConsoleColor.Red;//获取或设置背景色
    System.Console.WindowHeight = 64;//可以通过这个属性获取或者设置高度
  }
}
```
Math类：
* Abs()
* Sqrt()
```c#
class Demo
{
  public static void Main(string[] args)
  {
    int a = System.Math.Abs(-10);//返回绝对值
    System.Console.WriteLine(a); //打印10
    System.Math.Sqrt(20);//参数的开方，返回double类型
  }
}
```

在查询中需要注意以下几点：

* 所查的类（结构、接口等）所属于哪个命名空间，找到正确的命名空间。
* 所查的类、方法、属性等是否用static关键字修饰
* 如果有则可以直接通过 类名.内容 的形式调用
* 如果没有则必须要先创建对象然后通过对象调用
* 使用函数时要格外留意该函数的返回值类型、参数列表、方法名
* 我们可以通过返回值类型确定函数最后的结果类型
* 参数列表规定了在调用方法时传入的数据类型
* 方法名一般可以表示该功能的作用，可以猜测函数有何作用

类：Console、Math、String、Ramdom、Convert等等
结构体（后面会学习，但现在可以简单使用）：Int32、DataTime等

### 对象的创建及使用

C#中基本是以类的形式去体现代码的，如果我们想使用一个类里面的内容（如方法），那么必须要显得带这个类的对象，否则无法使用。

创建类的对象的格式：类名 变量名 = new 类名（）;

使用对象的方法：变量名.方法

```C#
class Demo
{
  public static void Main(string[] args)
  {
    Random r = new Random();//创建Random类的对象才能使用其功能
    int a = r.Next(1, 10);//返回指定范围内的任意整数，通过名字使用功能
    Console.WriteLine(a);//打印返回的结果为1-10之间的任意整数
  }
}
```
**https://msdn.microsoft.com/zh-cn/library/mt472912(v=vs.110).aspx**

```C#
//在程序中产生1–100之间的随机数，让玩家在控制台中重复猜测。如果猜大了则提示：“猜大了” ；
//猜笑了则提示： “小了” 。猜对的话提示： “终于猜对了，总共猜了？次。”


using System;

class Suiji
{
	static void Main(string[] args)
	{
		Random rd = new Random(); //创建Random对象
		int a = rd.Next(0,100);		 //0~100随机数
		
		//Console.WriteLine(a);
		int sum = 0;
		for (int i = 0;i <=a;i++)
		{
			int b = Convert.ToInt32(Console.ReadLine());  //输入要猜的数
			sum++;
			if(a == b)
			{
				System.Console.WriteLine("猜对了：{0}",a);  
				
				break;
			}
			if(b < a)
			{
					System.Console.WriteLine("猜小了");
			}
			if(b > a)
			{
					System.Console.WriteLine("猜大了");	
			}
			
			//System.Console.WriteLine("sum = {0}",sum);
		}
		System.Console.WriteLine("一共猜了{0}次",sum);	
	}	
}
```































