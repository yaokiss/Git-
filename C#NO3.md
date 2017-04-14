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
条件表达式的结果为布尔值的表达式



















































