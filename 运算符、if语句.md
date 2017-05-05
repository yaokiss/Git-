# 运算符

### 运算符分类

* 算数运算符

* 赋值运算符

* 比较运算符

* 逻辑运算符

* 三元运算符

* 位运算符


### 算数运算符

![](http://nts.newbieol.com/static/k30/unity_csharp/5,%E8%BF%90%E7%AE%97%E7%AC%A6/images/1.png)

**C#中用两个整数做除法运算时最终结果永远是整数，无法得到小数**

举例：
```C#
class Demo
{
  static void Main(string[] args)
  {
    Console.WriteLine(6324 / 1000 * 1000);
  }
}
```
6324 / 1000 * 1000最后的结果是6000，因为6324和1000都是整数int类型，做除法后不会得到小数类型6.324而是int类型。为了保证是int类型。结果只能是6.不是四舍五入而是直接舍掉了小数。所以6 * 1000的结果是6000。在程序中计算是按顺序的。

**加号还有另外的功能叫字符串连接符，可以将两个字符串或者一个字符和数据连接成为一个更大的字符串**


* % 模是得到两个数值做除法运算后的余数。

举例：
```C#
class Demo
{
  static void Main(string[] args)
  {
    System.Console.WriteLine(5 % 2); //商2余1
    
    System.Console.WriteLine(2 % 5); //商0余2
   
        //任何数模2，结果不是0就是1
  }
}
```

```C#
/*
算数运算符：
+	-	*	/
% : 模

++ ：自增符号，在原来数据的基础上+1，再赋值给原来的数据
--
*/
class OpeDemo1
{
  static void Main(string[] args)
  {
		/*两个int类型做除法运算最后得到int类型
		int a = 2345;//double a = 2345.0;
		System.Console.WriteLine(a / 1000 * 1000);*/
		
		/*求余数
		System.Console.WriteLine(2 % 5);
		System.Console.WriteLine(5 % 2);
		System.Console.WriteLine(5 % 5);*/
		
		int a = 1;
		//a++; // a = a + 1
		//++a; //和上一句结果是一样的。
		//System.Console.WriteLine(a);
		//int b = a++;//自增符号在数据的后面，运算优先级比较低
		//int b = ++a;
		//System.Console.WriteLine("a = " + a + ",b = " + b);
		//a = a++;
		System.Console.WriteLine(a);
  }
}
```


* ++ 自增是在原有数据基础上加1后再赋值给原有的数据。符号放到数据的前后都可以。

```C#
calss Demo
{
  static void Main(string[] args)
  {
    int a = 2;
    //a++;
    //++a;  //a = a + 1; 对于只有自增运算的表达式来说。自增符号放在前边和后边是一样的。
    //System.Console.WriteLine(a);   直接打印a是自增以后的值。
    
    //int b = a++; //运算符优先级，当自增运算符在后边时候，先取值在加1，b是2
    int b = ++a; //自增符号在前边的时候。先自增加1，再赋值，b是3
    System.Console.WriteLine(b);
   }
}
```
上述同 -- 自减道理一样，

### 赋值运算符

![](http://i4.buimg.com/591195/e398e3c8036357c6s.png)

```
 =   将右边的值赋值给左边的变量
 +=  将左右两边的数值相加再赋值给左边
 -=  将左右两边的数值相减再赋值给左边
 *=  将左右两边的数值相乘再赋值给左边
 /=  将左右两边的数值相除再赋值给左边
 %=  将左右两边的数值求模再赋值给左边
```

```C#
/*
赋值运算符：
=		+=	-=	*=	/=	%=
*/
class OpeDemo2
{
  static void Main(string[] args)
  {
		/*赋值运算符中的=
		int a = 1, b, c, d;
		b = c = d = a;*/
		
		int a = 2;	
		//a += 2;// 
		a = a + 2;
		System.Console.WriteLine("a = " + a);
		
		sbyte b = 2;
		b += 2;
		//b = (sbyte)(b + 2);虽然可以这么理解，但是底层不是这么算的
		System.Console.WriteLine("b = " + b);
  }
}
```


### 比较运算符

![](http://nts.newbieol.com/static/k30/unity_csharp/5,%E8%BF%90%E7%AE%97%E7%AC%A6/images/3.png)

```
 >   比较左边的值是否大于右边的值
 <   比较左边的值是否小于右边的值
 >=  比较左边的值是否大于等于右边的值
 <=  比较左边的值是否小于等于右边的值
 ==  比较左右两边的值是否相等
 !=  比较左右两边的值是否不等

```

```C#
class Demo
{
  public static void Main(string[] args)
  {
	System.Console.WriteLine(3 > 4);
	System.Console.WriteLine(3 < 4);
	System.Console.WriteLine(3 == 4);
	System.Console.WriteLine(3 >= 4);
	System.Console.WriteLine(4 <= 4);
  }
}
输出结果依次为：False 、True 、False 、False 、True
```
```C#
/*
比较运算符：
>	<	>=	<=	==	!=
*/
class OpeDemo3
{
  static void Main(string[] args)
  {
		System.Console.WriteLine(3 > 4);
		System.Console.WriteLine(4 >= 4);
		System.Console.WriteLine(4 == 4);
  }
}
```
**在C#中用布尔类型的值来表示'是'(true)、'否'(false), 所以通过运算符运算得到的结果一定是布尔值（bool）**


### 逻辑运算符

逻辑运算符是用来连接两个布尔值（或结果是布尔值的表达式），可以将两个布尔值进行运算

![](http://nts.newbieol.com/static/k30/unity_csharp/5,%E8%BF%90%E7%AE%97%E7%AC%A6/images/4.png)

```
 &   逻辑与运算
 |   逻辑或运算
 ^   逻辑异或运算
 &&  双与运算符
 ||  双或运算符
 !   逻辑非运算
```

```C#
class Demo
{
  public static void Main(string[] args)
  {
  	int x = 4;
	System.Console.WriteLine(x > 3 & x < 5);//true
	System.Console.WriteLine(x < 3 & x < 5);//false
	System.Console.WriteLine(x < 3 & x > 5);//false

	//System.Console.WriteLine(true & false);这样写也可以

	//逻辑或运算按照上面的格式自己举例总结。

	System.Console.WriteLine(!!true);
  }
}
```

```C#
/*
逻辑运算符：连接两个布尔值或者结果是布尔值的表达式的。

3 < x <５
可以使用逻辑运算符将两个式子连接
3 < x
x < 5

逻辑与运算：&
运算特点：
true && true = true;
true && false = false;
false && true = false;
false & false = false;

运算规律：
当符号两边有一边是false，结果一定是false；只有两边都是true，结果才是true

双与运算符：&&
& 和 && 的运算结果一模一样
& 和 && 的区别：&& 具有短路效果。
*/
class OpeDemo4
{
  static void Main(string[] args)
  {
		int x = 4;
		
		System.Console.WriteLine(3 < x && x < 5);
		
		System.Console.WriteLine("---------");
		System.Console.WriteLine(!!!true);
  }
}
```
* 要注意 &和&&、|和||的区别：&&运算符进行运算时，如果运算符左边为false，那么右边无论是true还是false都不予计算，直接得出结果为false；||运算符进行运算时，如果运算符左边true，那么右边无论是true还是false都不予计算，直接得出结果为true。以上效果都可以叫做短路效果

### 三元运算符

三元运算符又可以叫三目运算符。表示三个元素参与运算的符号。

![](http://nts.newbieol.com/static/k30/unity_csharp/5,%E8%BF%90%E7%AE%97%E7%AC%A6/images/5.png)

三元运算符的使用格式： 条件表达式 ？ 数据1 ： 数据2

```C#
class OpeDemo5
{
  public static void Main(string[] args)
  {
	//int a = (3 > 4) ? 100 : 200; //冒号两边可以是具体数据
	//System.Console.WriteLine(a);//结果为200

	bool a = 3 > 4 ? (3 > 4) : 3 < 4;//冒号两边可以是表达式，但要明确表达式结果的类型
	System.Console.WriteLine(a);//结果为true
  }
}
```
```C#
/*
三元运算符
?:			条件表达式 ? 数据1 : 数据2      3 > 4

条件表达式：无论条件表达式写的多复杂，最终只有一个结果，就是布尔值
*/
class OpeDemo5
{
  static void Main(string[] args)
  {
		//三元运算符。
		int a = (3 > 4) ? 100 / 2 : 200 / 2;
		System.Console.WriteLine(a);
  }
}
```
```C#
//用三元运算符求出两个数中较大的一个
class Sanyuan
{
	static void Main(string[] args)
	{
		int i = 2, j = 3,k = 4;
		int a = (i > j)? i : j;
		System.Console.WriteLine("i = "+i + ",j = "+j);
		System.Console.WriteLine(a);	
		
		//用三元运算求出三个数中较大的一个
		int b = (i > j) ?((i > k) ? i : k) : ((j > k) ? j : k);
				
		System.Console.WriteLine(b);
		
	}	
}
```

条件表达式的结果为布尔值的表达式

### 位运算符

位运算符主要针对二进制进行运算

![](http://nts.newbieol.com/static/k30/unity_csharp/5,%E8%BF%90%E7%AE%97%E7%AC%A6/images/6.png)

```
&    与运算
 |    或运算
 ^    异或运算
 <<    左位移
 >>    右位移
 ~    取反
```
![](http://i4.buimg.com/591195/4ac3d9a61d6018d5.png)


**按位与运算符(&)**

参加运算的两个数据，按二进制位进行“与”运算。

运算规则：0&0=0;   0&1=0;    1&0=0;     1&1=1;

       即：两位同时为“1”，结果才为“1”，否则为0

例如：3&5  即 0000 0011 & 0000 0101 = 0000 0001   因此，3&5的值得1。

 

另，负数按补码形式参加按位与运算。

“与运算”的特殊用途：

（1）清零。如果想将一个单元清零，即使其全部二进制位为0，只要与一个各位都为零的数值相与，结果为零。

 

（2）取一个数中指定位

方法：找一个数，对应X要取的位，该数的对应位为1，其余位为零，此数与X进行“与运算”可以得到X中的指定位。

例：设X=10101110，

    取X的低4位，用 X & 0000 1111 = 0000 1110 即可得到；

    还可用来取X的2、4、6位。


**按位或运算符（|）**

参加运算的两个对象，按二进制位进行“或”运算。

运算规则：0|0=0；   0|1=1；   1|0=1；    1|1=1；

      即 ：参加运算的两个对象只要有一个为1，其值为1。

例如:3|5　即 0000 0011 | 0000 0101 = 0000 0111   因此，3|5的值得7。　

 

另，负数按补码形式参加按位或运算。

“或运算”特殊作用：

（1）常用来对一个数据的某些位置1。

方法：找到一个数，对应X要置1的位，该数的对应位为1，其余位为零。此数与X相或可使X中的某些位置1。

例：将X=10100000的低4位置1 ，用 X | 0000 1111 = 1010 1111即可得到。


**异或运算符（^）**

参加运算的两个数据，按二进制位进行“异或”运算。

运算规则：0^0=0；   0^1=1；   1^0=1；   1^1=0；

   即：参加运算的两个对象，如果两个相应位为“异”（值不同），则该位结果为1，否则为0。

 

“异或运算”的特殊作用：

（1）使特定位翻转找一个数，对应X要翻转的各位，该数的对应位为1，其余位为零，此数与X对应位异或即可。

例：X=10101110，使X低4位翻转，用X ^ 0000 1111 = 1010 0001即可得到。

 

（2）与0相异或，保留原值 ，X ^ 0000 0000 = 1010 1110。

从上面的例题可以清楚的看到这一点。


**取反运算符（~）**

参加运算的一个数据，按二进制位进行“取反”运算。

运算规则：~1=0；   ~0=1；

      即：对一个二进制数按位取反，即将0变1，1变0。

 

使一个数的最低位为零，可以表示为：a&~1。~1的值为1111111111111110，再按“与”运算，最低位一定为0。因为“~”运算符的优先级比算术运算符、关系运算符、逻辑运算符和其他运算符都高。

**左移运算符（<<）**

将一个运算对象的各二进制位全部左移若干位（左边的二进制位丢弃，右边补0）。

例：a = a << 2 将a的二进制位左移2位，右补0，

左移1位后a = a * 2; 

若左移时舍弃的高位不包含1，则每左移一位，相当于该数乘以2。

**右移运算符（>>）**

将一个数的各二进制位全部右移若干位，正数左补0，负数左补1，右边丢弃。

操作数每右移一位，相当于该数除以2。

例如：a = a >> 2 将a的二进制位右移2位，

左补0 or 补1 得看被移数是正还是负。    >> 运算符把 expression1 的所有位向右移 expression2 指定的位数。expression1 的符号位被用来填充右移后左边空出来的位。向右移出的位被丢弃。

例如，下面的代码被求值后，temp 的值是 -4：

  -14 （即二进制的 11110010）右移两位等于 -4 （即二进制的 11111100）。

 vartemp = -14 >> 2


## 练习题

```C#
//求a和b的值
class Work
{
	static void Main(string[] args)
	{
		/*
		int a = 100;
		int b = --a; //b = a - 1 , a = 99
		b = ++a; //b = a + 1  , b = 99 + 1
		System.Console.WriteLine("a = "+a + ",b = "+b); // a == 100, b == 100
		*/
		
		
		/*
		int a = 3;
		int b = (a++) + (a++) + (++a);
		System.Console.WriteLine("a = "+a + ", b = "+b);
		//++在后优先级低，a = 3先赋给b，然后自加得4，在赋给b，然后自加得5。++在前有优先级,先自加然后再赋值得a = 6，b = 3 + 4 + 6
		
		*/
		
		
		/*
		int a = 1;
		a = (a++) + (++a);//a++得a先赋给a,然后再自增得2，++a有优先级得2+1=3。a = 1+3
		System.Console.WriteLine("a = "+a); //a = 4
		*/
		
		
		/*
		int x = 3;
		x++;
		int y = x;
		System.Console.WriteLine("x = "+x + ",y = "+y);
		*/
		
		/*
		int a = 100;
		int b = 100;
		a = b++;//b先赋给a，然后再自加
		b = ++a;//a先自加，然后再赋给b。a自加等于101，
		System.Console.WriteLine("a = "+a + ",b = "+b);
		*/
		
		int a = 3;
		a = (a++) + (--a) + (a--) + (++a);
		int b = (++a) + (a--);
		a = b--;
		System.Console.WriteLine("a = "+a + ",b = "+b);
		
	}
	
}
```

**进制转换**

二进制101101转换为十进制

```
1*2^5 + 0*2^4 + 1*2^3 +1*2^2 + 0*2^1 + 1*2^0
 32   +    0   +   8  +   4  +   0   +   1  = 45
```

十进制15转换为二进制
```
15 = 2*7+1
 7 = 2*3+1
 3 = 2*1+1
 1 = 2*0+1

 15的二进制是1111
 ```


## If语句

```C#
/*
流程控制：分支结构、循环结构
分支结构：判断结构和选择结构。

判断结构：3种
*/
class IfDemo
{
  static void Main(string[] args)
  {
		/*
		第一种格式
		if(条件表达式)
		{
		  执行语句;
		}
		
		int a = 1;
		if(a < 3)
		{
			System.Console.WriteLine("hello");
		}
		System.Console.WriteLine("ok");
		*/
		
		/*
		第二种格式：
		if(条件表达式)
		{
		  执行语句;
		}
		else  否则
		{
		  执行语句;
		}
				
		
		int a = 1;
		if(a < 3) 
		{
			System.Console.WriteLine("hello");
		}
		else
		{
			System.Console.WriteLine("ok");
		}
		System.Console.WriteLine("ole");*/
		/*int a = 1, b;
		
		if(a < 3)
		{
			System.Console.WriteLine("100");
		}
		else
		{
			System.Console.WriteLine("200");
		}
		
		//b = (a < 3) ? System.Console.WriteLine("100") : System.Console.WriteLine("200")
		
		System.Console.WriteLine(b);*/
		
		/*
		第三种格式：
		if(条件表达式)
		{
		  执行语句;
		}
		else if(条件表达式)
		{
		  执行语句；
		}
		.
		.
		else
		{
		  执行语句；
		}
			
		
		int a = 3;
		if(a > 1)
		{
			System.Console.WriteLine("A");
		}	
		
		
		if(a > 2)
		{
			System.Console.WriteLine("B");
		}
		else if(a > 3)
		{
			System.Console.WriteLine("C");
		}
		else
		{
			System.Console.WriteLine("D");
		}
		
		System.Console.WriteLine("E");*/
		
		int a = 3;
		if(a < 1);
		{
			System.Console.WriteLine(a);	
		}
  }
}
```























