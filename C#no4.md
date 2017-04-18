# if代码

```C#
/* 
输入一个年份，判断该年份是否为闰年。闰年满足以下任何一个条件
1.能被4整除而不能被100整除.（如2004年就是闰年,1900年不是）
2.能被400整除.（如2000年是闰年）
*/

class If
{
	static void Main (string[] args)
	{
		System.Console.WriteLine("请输入一个年份，判断是否是闰年");
		int a = System.Convert.ToInt32(System.Console.ReadLine());
		if(((a % 4) == 0 && (a % 100) != 0)||(a % 400) == 0)
		{
			
				System.Console.WriteLine("这一年是闰年");	
		}		
		
		else 
		{
			System.Console.WriteLine("这一年不是闰年");
		}
		
		
	}	
}
```

```C#
/*键盘读入三个整数6，5，9，请把这三个数由大到小输出。*/
 
class If1
{
	static void Main(string[] args)
	{
		/*
		int a = System.Convert.ToInt32(System.Console.ReadLine());
		int b = System.Convert.ToInt32(System.Console.ReadLine());
		int c = System.Convert.ToInt32(System.Console.ReadLine());
		
		if((a > b) && (b > c)) // a > b > c
		{
			System.Console.WriteLine(" {0} {1} {2}", a, b, c);
		}
		
		else if((b > a) && (a > c))	//b > a > c
		{
			System.Console.WriteLine(" {0} {1} {2}", b, a, c);
		}
		
		else if((c > a) && (a > b))	//c > a > b
		{
			System.Console.WriteLine(" {0} {1} {2}", c, a, b);
		}
		else if((b > c) && (c > a))	//b > c > a
		{
			System.Console.WriteLine(" {0} {1} {2}", b, c, a);
		}
		
		else if((a > b) && (b < c))	//a > b < c
		{
			System.Console.WriteLine(" {0} {1} {2}", a, c, b);
		}
		
		else
		{
			System.Console.WriteLine(" {0} {1} {2}", c, b, a);	
		}
	*/
	
		      System.Console.WriteLine("输入三个数");
		double i = System.Convert.ToDouble(System.Console.ReadLine());
		double j = System.Convert.ToDouble(System.Console.ReadLine());
		double k = System.Convert.ToDouble(System.Console.ReadLine());
		double sum;
		/*
		//如果i < j 则i 和 j交换位置
		if (i < j)
		{
			sum = i;
			i = j;
			j = sum;	
		}
		//如果i < k 则i 和 k交换位置
		if(i < k)
		{
			sum = i;
			i = k;
			k = sum;	
		}
		//如果j < k 则j 和 k交换位置
		if(j < k)
		{
			sum = j;
			j = k;
			k = sum;
		}
		System.Console.WriteLine("{0} > {1} > {2}", i, j, k);
		*/
		
		if(i > j)
		{
			sum = i;
			i = j;
			j = sum;
		}
		if(i > k)
		{
			sum = i;
			i = k;
			k = sum;
		}
		if(j > k)
		{
			sum = j;
			j = k;
			k = sum;	
		}
			System.Console.WriteLine("{0} < {1} < {2}", i, j, k);
	
	}	
}
```

```C#
//读入一个三位数。计算各位数字之和。
class If2
{
	static void Main(string[] args)
	{
		int a = System.Convert.ToInt32(System.Console.ReadLine());
		
		//个位数取余直接（%10） 十位数取余需要先除10在取余，百位数需要先除100在取余。以此类推
		System.Console.WriteLine((a % 10) + ((a/10)%10) +((a/100)%10));
	}	
}
```
```C#
/*
托运计费问题：
当货物重量小于20 公斤的时候，收费5 元，大于20 公斤小于100 公斤的时候超出20公斤的部分按每0.2 元每公斤
计费，如果超出100 公斤的时候，超出的部分按照每公斤0.15元计算。读入货物的重量，输出计算之后货物的运费。

*/

class If4
{
	static void Main(string[] args)
	{
		double a = System.Convert.ToDouble(System.Console.ReadLine());
		double b,c;
		if(a <= 20)
		{
			System.Console.WriteLine("5元");
		}	
		if(a > 20 && a <= 100)
		{
			
			a = (a - 20)* 0.2;
			c = a;
			System.Console.WriteLine("{0}元",(c + 5));	
		}
		
		if(a > 100)
		{
			a = ((a - 100) * 0.15);
			b = a;
			System.Console.WriteLine("{0}元",b + ((100 - 20)*0.2) + 5);
		}
		
	}	
	
}
```

```C#
//读入一个整数，如果是1~5之间，则分别输出5个福娃的名字，否则输出“北京欢迎你”
class IfDemo2
{
	static void Main(string[] args)
	{
		int a = System.Convert.ToInt32(System.Console.ReadLine());
		if(a == 1)
		{
			System.Console.WriteLine("贝贝");	
		}
		else if(a ==2)
		{
			System.Console.WriteLine("晶晶");
		}
		else if(a ==3)
		{
			System.Console.WriteLine("欢欢");
		}
		else if(a ==4)
		{
			System.Console.WriteLine("迎迎");
		}
		else if(a ==5)
		{
			System.Console.WriteLine("妮妮");
		}
		else
		{
			System.Console.WriteLine("北京欢迎你");
		}
	
	}	
}

```

```C#
//键盘输入年龄，做判断
class IfDemo3
{
	static void Main(string[] args)
	{
		System.Console.WriteLine("请输入年龄");
		int a = System.Convert.ToInt32(System.Console.ReadLine());//键盘输入
		
		if (a < 0)
		{
			System.Console.WriteLine("输入错误,请输入正确年龄");	
		}
		//a需要大于0，否则输入负数也会出结果
		if (a > 0 && a < 6) //小于6岁是儿童
		{
			System.Console.WriteLine("儿童");
		}
		else if (a > 0 && a <= 13)	//
		{
			System.Console.WriteLine("少儿");
		}
		else if (a > 0 && a < 18)
		{
			System.Console.WriteLine("青少年");
		}
		else if (a > 0 && a < 35)
		{
			System.Console.WriteLine("青年");
		}	
		else if (a > 0 && a <= 50)
		{
			System.Console.WriteLine("中年");	
		}
		else if (a < 90 && a > 50)
		{
			System.Console.WriteLine("中老年");
		}
		else if (a >= 90 && a <= 120  )
		{
			System.Console.WriteLine("长寿老人");
		}
		else if (a > 0 && a > 120)
		{
			System.Console.WriteLine("年龄太大，无法识别此人是否存活");
		}
		
	}	
}
```

```C#
//将学生的考试成绩转换为不同等级
class IfDemo4
{
	static void Main(string[]args)	
	{
		System.Console.WriteLine("请输入成绩");
		int a = System.Convert.ToInt32(System.Console.ReadLine());	
		
		if (a == 100)
		{
			System.Console.WriteLine("A");
		}
		else if (a >= 90 && a < 100)
		{
			System.Console.WriteLine("B");
		}
		else if (a >= 80 && a < 90)
		{
			System.Console.WriteLine("C");	
		}
		else if (a >= 70 && a < 80)
		{
			System.Console.WriteLine("D");	
		}
		else if (a >= 60 && a < 70)
		{
			System.Console.WriteLine("E");	
		}
		else
		{
			System.Console.WriteLine("F");
		}
	}
}
```

```C#
//键盘输入一个数，判断对应的星期并输出。(如数字1对应输出星期一)
//情况要考虑全面。如超出范围数字。
class IfDemo5
{
	static void Main(string[] args)
	{
		System.Console.WriteLine("请输入一个整数");
		int a = System.Convert.ToInt32(System.Console.ReadLine());
		if(a == 1)
		{
			System.Console.WriteLine("星期一");
		}
		else if(a == 2)
		{
			System.Console.WriteLine("星期二");
		}
		else if(a == 3)
		{
			System.Console.WriteLine("星期三");
		}
		else if(a == 4)
		{
			System.Console.WriteLine("星期四");
		}
		else if(a == 5)
		{
			System.Console.WriteLine("星期五");
		}
		else if(a == 6)
		{
			System.Console.WriteLine("星期六");
		}
	
		else if(a == 7)
			{
				System.Console.WriteLine("星期日");
			}
		else
		{
			System.Console.WriteLine("1~7的数字");	
		}	
	}	
}


//键盘输入一个数。判断对应季节(如12,1,2是冬季，3，4,5是春季)
class IfDemo6
{
	static void Main(string[] args)
	{
		System.Console.WriteLine("请输入数字1~12月,判断季节");
		int a = System.Convert.ToInt32(System.Console.ReadLine());
		if(a <= 0)
		{
			System.Console.WriteLine("请输入有效月份...");	
		}			
		
		else if(a == 12 || a <= 2)  // 必须用或表示
		{
			System.Console.WriteLine("冬季");	
		}
		
		else if(a >= 3 && a <= 5)
		{
			System.Console.WriteLine("春季");	
		}
		
		else if(a >= 6 && a <= 8)
		{
			System.Console.WriteLine("夏季");	
		}
		
		else if(a >= 9 && a <= 11)
		{
			System.Console.WriteLine("秋季");	
		}
		
		else
		{
			System.Console.WriteLine("请输入有效月份......");	
		}
		
	}	
}
```

# switch选择结构代码

```C#
//从键盘读入一个数字，判断对应的星期并输出出来（如，数字1对应输出星期一）。
//情况要考虑全面，如超出范围的数字。

class XzDemo1
{
	static void Main(string[] args)
	{
		int a = System.Convert.ToInt32(System.Console.ReadLine());
		switch(a)
		{
			case 1:
			System.Console.WriteLine("星期一");
			break;	
			case 2:
			System.Console.WriteLine("星期二");
			break;
			case 3:
			System.Console.WriteLine("星期三");
			break;
			case 4:
			System.Console.WriteLine("星期四");
			break;
			case 5:
			System.Console.WriteLine("星期五");
			break;
			case 6:
			System.Console.WriteLine("星期六");
			break;
			case 7:
			System.Console.WriteLine("星期日");
			break;
			default:
			System.Console.WriteLine("超出范围");
			break;
		}	
	}	
}
```


```C#
//从键盘读入一个数字，判断对应的季节并输出出来（如，12，1，2是冬季；3，4，5是春季以此类推）
class XzDemo2
{
		static void Main(string[] args)
		{
			int a = System.Convert.ToInt32(System.Console.ReadLine());
			
			switch (a)
			{
				case 3:
				case 4:
				case 5:
				System.Console.WriteLine("春季");
				break;	
				
				case 6:
				case 7:
				case 8:
				System.Console.WriteLine("夏季");
				break;
				
				case 9:
				case 10:
				case 11:
				System.Console.WriteLine("秋季");
				break;
				
				case 12:
				case 1:
				case 2:
				System.Console.WriteLine("冬季");
				break;
				
				default:
				System.Console.WriteLine("输入有误");
				break;
			}	
		}
}
```

```C#
//将学生的考试成绩转换成不同的等级：100分为A,90分以上为B，80分以上但小于90分为C，依次类推，
//F表示不及格。从键盘输入一个整数，可以显示该学生分数的等级。
class XzDemo3
{
	static void Main(string[] args)
	{
		int a = System.Convert.ToInt32(System.Console.ReadLine());
		int b = a / 10; //按int类型，除10之后取整。
		switch(b)
		{
			case 10:
			System.Console.WriteLine("A");
			break;
			case 9:
			System.Console.WriteLine("B");
			break;
			case 8:
			System.Console.WriteLine("C");
			break;
			case 7:
			System.Console.WriteLine("D");
			break;
			case 6:
			System.Console.WriteLine("E");
			break;
			default:
			System.Console.WriteLine("F");
			break;
		}
	}	
}
```

```C#
/*用switch语句完成一个简单的计算器，功能需求如下：
程序运行后欢迎用户使用计算器功能，提示用户选择加减乘除4项功能其中之一。
用户选择功能后提示用户分别输入两个数字。
输入完毕后得出最后结果。
注意，继输入的数字都是整数就行，最好结果更精确一些
*/
class XzDemo4
{
	static void Main(string[] args)
	{
		System.Console.WriteLine("欢迎使用计算器");
		System.Console.WriteLine("加法请按1、减法请按2、乘法请按3、除法请按4");
		int a = System.Convert.ToInt32(System.Console.ReadLine());
		switch (a)
		{
			case 1:
				System.Console.WriteLine("您选择了：+");
				System.Console.WriteLine("请输入要做运算的第一个数");
				int i = System.Convert.ToInt32(System.Console.ReadLine());
				System.Console.WriteLine("请输入要做运算的第二个数");
				int j = System.Convert.ToInt32(System.Console.ReadLine());
				int k = i + j;
				System.Console.WriteLine("结果是：{0} + {1} = {2}",i, j, k);
				break;
			
			case 2:
				System.Console.WriteLine("您选择了：-");
				System.Console.WriteLine("请输入要做运算的第一个数");
				int i1 = System.Convert.ToInt32(System.Console.ReadLine());
				System.Console.WriteLine("请输入要做运算的第二个数");
				int j1 = System.Convert.ToInt32(System.Console.ReadLine());
				int k1 = i1 - j1;
				System.Console.WriteLine("结果是：{0} - {1} = {2}",i1, j1, k1);
			break;
			
			case 3:
				System.Console.WriteLine("您选择了：*");
				System.Console.WriteLine("请输入要做运算的第一个数");
				int i2 = System.Convert.ToInt32(System.Console.ReadLine());
				System.Console.WriteLine("请输入要做运算的第二个数");
				int j2 = System.Convert.ToInt32(System.Console.ReadLine());
				int k2 = i2 * j2;
				System.Console.WriteLine("结果是：{0} * {1} = {2}",i2, j2, k2);
			break;
			
			case 4:
				System.Console.WriteLine("您选择了：/");
				System.Console.WriteLine("请输入要做运算的第一个数");
				int i3 = System.Convert.ToInt32(System.Console.ReadLine());
				System.Console.WriteLine("请输入要做运算的第二个数");
				int j3 = System.Convert.ToInt32(System.Console.ReadLine());
				int k3 = i3 / j3;
				System.Console.WriteLine("结果是：{0} / {1} = {2}",i3, j3, k3);
			break;
		}
	}	
}
```

```C#
/*
将学生的考试成绩转换成不同的等级：10分为A,9分为B，8分为C，依次类推，
F表示不及格。从键盘输入一个整数，可以显示该学生分数的等级
*/
class XzDemo5
{
	static void Main (string[] args)
	{
		int a = System.Convert.ToInt32(System.Console.ReadLine());
		
		switch (a)
		{
			case 10:
			System.Console.WriteLine("A");
			break;	
			
			case 9:
			System.Console.WriteLine("B");
			break;
			
			case 8:
			System.Console.WriteLine("C");
			break;
			
			case 7:
			System.Console.WriteLine("D");
			break;
			
			case 6:
			System.Console.WriteLine("E");
			break;
			
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
			case 0:
			System.Console.WriteLine("F");
			break;
			
			default:
			System.Console.WriteLine("输入有误");
			break;
		}
	}	
}
```
```C#
//读入一个整数，如果是1~5 之间，则分别输出5 个福娃的名字，否则输出“北京欢迎你”

class XzDemo
{
	static void Main(string[] args)
	{
		int a = System.Convert.ToInt32(System.Console.ReadLine());
		
		switch(a)
		{
			case 1:
			System.Console.WriteLine("贝贝");
			break;
			case 2:
			System.Console.WriteLine("晶晶");
			break;
			case 3:
			System.Console.WriteLine("欢欢");
			break;
			case 4:
			System.Console.WriteLine("迎迎");
			break;
			case 5:
			System.Console.WriteLine("妮妮");
			break;
			default:
			System.Console.WriteLine("北京欢迎你");	
			break;
		}	
	}	
}
```



























































