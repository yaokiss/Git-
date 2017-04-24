# 练习


定义一个功能，可以接受键盘输入的数字，并把输入的最大值和最小值求出来。

```C#
class Max
{
	static void Main(string[] args)
	{
		int [] sum = new int[5];
		sum[0] = System.Convert.ToInt32(System.Console.ReadLine());
		sum[1] = System.Convert.ToInt32(System.Console.ReadLine());
		sum[2] = System.Convert.ToInt32(System.Console.ReadLine());
		sum[3] = System.Convert.ToInt32(System.Console.ReadLine());
		sum[4] = System.Convert.ToInt32(System.Console.ReadLine());
		
		Max1(sum);
		Min(sum);
		
	}	
	static void Max1(int[] sum)
	{
		int tmp = sum[0];
		for (int i = 0;i < sum.Length;i++)
		{
			if(sum[i] > tmp)	//比大
			{
				tmp = sum[i];
			}
		}	
		System.Console.WriteLine("最大值是："+tmp);
	}
	
	static void Min(int[] sum)
	{
		int tmp = sum[0];
		for(int i = 0;i < sum.Length;i++)
		{
			if(sum[i] < tmp)
			{
				tmp = sum[i];	
			}	
		}	
		System.Console.WriteLine("最小值是："+tmp);
	}
}
```




```C#
//定义一个功能，可以接受键盘输入的数字，并把输入的数字从大到小排列。（两种排序方式）

class PaiLie
{
	static void Main(string[] args)
	{
		int[] s = new int[5];
		s[0] = System.Convert.ToInt32(System.Console.ReadLine());
		s[1] = System.Convert.ToInt32(System.Console.ReadLine());
		s[2] = System.Convert.ToInt32(System.Console.ReadLine());
		s[3] = System.Convert.ToInt32(System.Console.ReadLine());
		s[4] = System.Convert.ToInt32(System.Console.ReadLine());
		Max(s);
		Min(s);
		
	}	
	
	static void Max(int[] s)
	{
		
		for(int i = 0;i < s.Length;i++)
		{
			for(int j = i+1;j < s.Length;j++)
			{
				if(s[i] < s[j])	
				{
					int sum = s[i];
					s[i] = s[j];
					s[j] = sum;	
				}
			}	
		}	
		foreach(int ele in s)
		{
		System.Console.WriteLine("大到小："+ ele);
		}
		
	}
	static void Min(int[] s)
	{
		
		for(int i = 0;i < s.Length;i++)
		{
			for(int j = i + 1;j < s.Length;j++)
			{
				if(s[i] > s[j])
				{
					int sum = s[j];
					s[j] = s[i];
					s[i] = sum;	
				}	
			}	
		}
		System.Console.WriteLine("---------");
		foreach(int ele in s)
		{
			System.Console.WriteLine("小到大："+ ele);	
		}	
	}
	
	static void MaoPao(int[] s)
	{
				
	}
}
```




```C#
class ArrayDome
{
	static void Main(string[] args)
	{
		int[] arr = {12,31,25,123,12,52,6,85,23,4,1,5,24};
		MAX(arr);
		System.Console.WriteLine("----------------------");
		MAX1(arr);
	}
	//找出最大值
	static void MAX(int[] arr)
	{
		int max = arr[0];
		for(int i = 0;i < arr.Length;i++)	
		{
			if(arr[i] > max)
			{
				max = arr[i];	
			}
		}
		System.Console.WriteLine(max);
	}
	//选择排序
	static void MAX1(int[] arr)
	{
			for(int x = 0;x < arr.Length - 1;x++)
			{
				for(int y = x + 1;y < arr.Length;y++)
				{
					if(arr[x] > arr[y])
					{
						int sum = arr[x];
						arr[x] = arr[y];		//交换位置
						arr[y] = sum;
					}
				}	
			}
			foreach(int ele in arr)
			{
				System.Console.WriteLine(ele);
			}
	}
	
	
}
```





























