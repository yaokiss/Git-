# 循环练习题

```C#
class Answers
{
    static void Main(string[] args)
    {
    
    
        /*第一题 : 打印出10次hello world
        for(int a = 0; a < 10; a++)
        {
        		System.Console.WriteLine("hello world");
        }
        
        第二题 : 打印出你所写的循环语句共循环了多少次
        for(int a = 0; a < 10; a++)
        {
        		System.Console.WriteLine(a);
        }
        
        第三题 : 循环格式求出1~10的和
        int sum = 0;
        for(int i = 1; i <= 10; i++)
        {
        		sum = sum + i;
        		//sum += i;
        }
        System.Console.WriteLine(sum);*/
        
        /*第四题 : 循环格式求出100内能被3整除但不能被5整除的数字
        for(int i = 0; i <= 100; i++)
        {
        		if(i % 3 == 0 && i % 5 ==1)
        		{
        				System.Console.WriteLine(i);
        		}
        		else
        		{
        				continue;
        		}
        }*/
        
        /*第五题 ：循环格式求出100内所有的奇数，并打印出来     
        for(int i = 0; i <= 100; i++)
        {
        		if(i % 2 == 0)
        		{
        				continue;
        		}
        		System.Console.WriteLine(i);
        }
        */ 
        
        /*第六题 ：循环格式求出100内所有的奇数的和并打印最后结果
        int sum = 0;
        for(int i = 0; i <= 100; i++)
        {
        		if(i % 2 == 0)
        		{
        				continue;
        		}
        		sum = sum + i;
        }
        System.Console.WriteLine(sum);*/
        
        /*第七题 ：
        int i = 10, sum = 1;
        for(int j = 2; j <= i; j++)
        {
        		sum = sum * 1;
        }
        System.Console.WriteLine(sum);*/
        
        /*第八题 ：求100 以内所有能被3 整除但不能被5 整除的数字的和
        int sum = 0;
        for(int i = 0; i <= 100; i++)
        {
        		if(i % 3 == 0 && i % 5 == 1)
        		{
        				sum = sum + i;
        		}
        		else
        		{
        				continue;
        		}
        }*/
        
        
        /*
 搬砖
 搬砖问题：36 块砖，36 人搬，男搬4，女搬3，两个小孩抬1 砖，要求一次全搬完，问男、女和小孩各若干？
        for(int a = 0; a<=9; a++){
						for(int b = 0; b<=12; b++){
						    int c = 36 - a - b;
								if (c % 2 !=0)
								{
										continue;
								}
								if (a*4 + b*3 + c/2 == 36)
								{
									System.Console.WriteLine(a + "个男，" + b + "个女，" + c + "个小孩");
								}
						}
				}*/
				
				/*abcd
编程找出四位整数abcd 中满足下述关系的数。
(ab+cd)(ab+cd)=abcd

				for(int i = 1000; i<=9999; i++){
						int ab = i / 100;
						int cd = i % 100;
						if ( (ab + cd)*(ab + cd) == i)
						{
								System.Console.WriteLine(i);
						}
				}*/
				
				/*打印图形
1 :
*****
*****
*****
*****

				for(int a = 0; a < 4; a++)
				{
						for(int b = 0; b < 5; b++)
						{
								System.Console.Write("*");
						}
						System.Console.WriteLine();
				}
				
2.1
*****
****
***
**
*

				for(int a = 0; a < 5; a++)
				{
						for(int b = 0; b < 5 - a; b++)
						{
								System.Console.Write("*");
						}
						System.Console.WriteLine();
				}
				
2.2


				for(int a = 5; a > 0; a--)
				{
						for(int b = 0; b < a; b++)
						{
								System.Console.Write("*");
						}
						System.Console.WriteLine();
				}
				
3
*
**
***
****
*****
				for(int a = 0; a < 5; a++)
				{
						for(int b = 0; b <= a; b++)
						{
								System.Console.Write("*");
						}
						System.Console.WriteLine();
				}
				
4
54321
4321
321
21
1

				for(int a = 0; a < 5; a++)
				{
						for(int b = 5 - a; b > 0; b--)
						{
								System.Console.Write(b);
						}
						System.Console.WriteLine();
				}
				
5
1
12
123
1234
12345

				for(int a = 0; a < 5; a++)
				{
						for(int b = 1; b <= a + 1; b++)
						{
								System.Console.Write(b);
						}
						System.Console.WriteLine();
				}
				*/
				
/*6
   *
  ***
 *****
*******

				for(int a = 0; a < 4; a++)
				{
						for(int b = 0; b < 3 - a; b++)
						{
								System.Console.Write(" ");
						}
						
						for(int c = 0; c < 2 * a + 1; c++)
						{
								System.Console.Write("*");
						}
						System.Console.WriteLine();
				}
				*/
				
/*7
	       *
      *     *
   *     *     *
*     *     *     *
   *     *     *
      *     *
         *

				for(int a = 0; a < 4; a++)
				{
						for(int b = 0; b < 3 - a; b++)
						{
								System.Console.Write("  ");
						}
						for(int c = 0; c <= a; c++)
						{
								System.Console.Write("*   ");
						}
						System.Console.WriteLine();	
				}
				
				for(int d = 0; d < 3; d++)
				{
						for(int e = 0; e <= d; e++)
						{
								System.Console.Write("  ");
						}
						for(int f = 0; f < 3 - d; f++)
						{
								System.Console.Write("*   ");
						}
						System.Console.WriteLine();
				}
				*/
				
/*8
按照以下格式打印99乘法表：
1*1=1
1*2=2	2*2=4
1*3=3	2*3=6	3*3=9


				for(int i = 1; i <= 9; i++)
				{
						for(int j = 1; j <= i; j++)
						{
								System.Console.Write("{0}*{1}={2}" + "\t", j, i, j * i);
						}
						System.Console.WriteLine();
				}
				*/
				
				/*小球：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
				double sum = 100.0;
				double t = 100.0;
				for(int i = 2; i <= 10; i++)
				{
						sum = sum + t;
						t = t / 2;
				}
				System.Console.WriteLine(sum);
				*/
				
				/*整数各位和 ：输入一个整数，计算它各位上数字的和。（注意：是任意位的整数）
				int n = System.Convert.ToInt32(System.Console.ReadLine());
				int sum = 0;
				while(n != 0){
					sum += n % 10; //获得低位的值，并加到sum上
					n = n / 10;	   //去掉低位的值
				}
				System.Console.WriteLine(sum);
				*/
				
/*判断质数:
输入一整数A，判断它是否质数。
提示1：若从2 到A 的平方根的范围内，没有一个数能整除A，则A 是质数。
提示2：在C#中计算n 的平方根可以使用System.Math.Sqrt(n)

				
				int n = System.Convert.ToInt32(System.Console.ReadLine());
				int i = 0;
				bool isPrime = true;
				for(i = 2; i<=Math.sqrt(n); i++)
				{
						if (n % i == 0){
							System.Console.WriteLine("不是质数");
							isPrime = false;
							break;
						}
				}
				if (isPrime)
				{
					System.Console.WriteLine("是质数");
				}
				*/
				
/*完数 :
 如果一个数等于其所有因子之和,我们就称这个数为"完数",例如6 的因子分别为1,2,3 。那么6=1+2+3。
 6 就是一个完数.请编程打印出1000 以内所有的完数


				for(int i = 2; i<=1000; i++)
				{
						int sum = 0; //sum用来统计i的因子和
						//计算所有因子和
						for(int j = 1; j<=i/2; j++)
						{
							if (i % j == 0) sum+=j;
						}
						if (sum == i)
						{
							System.Console.WriteLine(i);
						}
				}
				*/
				
/*斐波那契数列
已知：faibonacci（费波那契）数列的前几个数分别为0，1，1，2，3，5，……。
从第3 项开始，每一项都等于前两项的和。
读入一个整数n，编程求出此数列的前n 项。
注意：这里的数列是从0 开始的。

				
				int n = System.Convert.ToInt32(System.Console.ReadLine());
				if (n <= 3)
				{
						System.Console.WriteLine("前3项：0, 1, 1");
				}
				else
				{
						System.out.print("0, 1, 1");
						//前一项（上一项的上一项）
						int preLast = 1;
						//上一项
						int last = 1;
						//当前项
						int thisItem = 0;
						for(int i = 4; i<=n; i++)
						{
								//当前项的值为前一项+上一项
								thisItem = preLast + last;
								
								//为计算下一项做准备
								//下一项的前一项，就是当前项的上一项
								preLast = last;
								//下一项的上一项，就是当前项
								last = thisItem;
								System.out.print(", " + thisItem);
						}
				}
				*/
				
/*数列
一个数列：1/1，2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。
				double zi = 2.0;
				double mu = 1.0;
				double sum = 1.0;
				for(int i = 2; i <= 20; i++)
				{
						sum = sum + zi / mu;
						double temp = zi;//定义一个临时变量记录分子的值（如果不记录，下面把分子给分母的时候在之前分子的值就改变了）
						zi = zi + mu;//下一次分子的值是这一次分子和分母相加
						mu = temp;
				}
				System.Console.WriteLine(sum);
				*/
				
				/*完全平方
				for(int i = 0; i <= 1000; i++)
				{
						if(System.Math.Sqrt(i + 100) == (int)System.Math.Sqrt(i + 100) && System.Math.Sqrt(i + 168) == (int)System.Math.Sqrt(i + 168))
						{
								System.Console.WriteLine(i);
						}
				}
				*/
				
				/*水仙花数：打印出200以内所有的 "水仙花数 "。所谓 "水仙花数 "是指一个三位数，其各位数字立方和等于该数本身
				for(int i = 100; i<=999; i++)
				{
						//分别获得三个位数上的值
						int a = i / 100;
						int b = i / 10 % 10;
						int c = i % 10;
						//计算各位数字的立方和
						int result = a*a*a + b*b*b + c*c*c;
						if (result == i)
						{
							System.Console.WriteLine(i);
						}
				}
				*/
				
/*猴子偷桃
猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个，第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，只剩下一个桃子。求第一天共摘了多少
				int initialNum=1;    
        System.Console.WriteLine(initialNum);
        for(int i=1;i<10;i++)
        {
            initialNum=(initialNum+1)*2;
            System.Console.WriteLine(initialNum);                            
        }
        System.Console.WriteLine(initialNum);
        */
    }
}
```
