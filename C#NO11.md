# 面向对象的三大特征：封装、继承、多态

## 封装

封装：方法（方法将逻辑性的代码进行封装） 类（类将对象的特征和行为进行了封装）

封装的概念和意义绝对不局限在属性中。是一个广泛的概念

封装-属性

public 权限修饰符，公共的，权限最大。在其他程序中的任何地方都可以访问。

private 私有的，权限最小。

属性：get 、 set 访问器

get 和 set 可以只写一个。只写get是叫只读属性

```C#
class EncapsulationDemo
{
  static void Main(string[] args)
  {
		Person p = new Person();
		p.Age = 20;//给属性赋值。set
		p.name = "旺财";
		p.Speak();
		System.Console.WriteLine(p.Age);//get
  }
}

class Person
{
	//当一个成员被修饰成private时，只能在本类中被访问
	private int age;
	private string name;
	
	//访问私有age的钥匙，属性
	public int Age
	{
		get//获取
		{
			return age;
		}
		
		set//设置
		{	
			//写入判断代码，判断赋值是否合法
			if(value < 0 || value > 140)
			{
				System.Console.WriteLine("输入的年龄错误");
			}
			else
			{
				age = value;//value关键字表示给age设置的值 
			}	
		}
	}
	
	public string Name
	{
		get{return name;}
		set{name = value;}	
	}
	
	public void Speak()
	{
		//age = 20;
		System.Console.WriteLine("我叫" + name + age + "岁了");
	}	
}

class Console
{
	private bool numlock;
	
	public bool NumLock
	{
		get{return numlock;}
	}
}
```

## 继承

### 概念

继承是面向对象三大特征之一，是面向对象语言一项重要的机制，借助继承，可以扩展原有的代码，应用到其他程序中。而不必重新编写这些
代码，具体可以表述为：继承可以使得子类具有父类的内部的大部分内容。而不需要再次编写相同的代码

多个类中存在相同特征或行为。可以将这些相同的内容抽取到单独一个类中，那么多个类无需在定义这些特征和行为
只要继承单独的那个类即可，多个类可以称之为子类，单独这个类称之为父类或者超类，子类可以直接访问父类中的非私有的字段和方法

### 面向对象三大特征：
* 封装。
* 继承。inherit
* 多态。

子类（派生类）   父类（超类，基类）

继承的好处：提高了代码的复用性。让类与类之间产生了联系，使代码的扩展性更强，，为多态提供了前提。

在C#中只支持单继承，不支持多重继承。但是C#把多继承进行了改良。C++中支持多继承

单继承：一个子类只能有一个直接父类。

多继承：一个子类可以有多个直接父类。

在定义继承时，不要单纯为了提高代码复用性而定义继承


**继承中，子类可以继承父类的内容包括：字段、属性、普通函数。而构造函数、析构函数无法被继承**

```C#
class InheritDemo
{
  static void Main(string[] args)
  {
		Student s = new Student();
		s.name = "旺财";
		s.age = 20;
		s.Speak();
		s.Study();
		
		Worker w = new Worker();
		w.name = "小强";
		w.age = 25;
		w.Speak();
		w.Work();
  }
}
//让Student和Worker分别与Person类产生关系：继承
class Person
{
	public string name;
	public int age;
	
	public void Speak()
	{
		System.Console.WriteLine(name + ".." + age);	
	}
}

class Student : Person
{
	/*
	public string name;
	public int age;
	
	public void Speak()
	{
		System.Console.WriteLine(name + ".." + age);	
	}
	*/
	public void Study()
	{
		System.Console.WriteLine("学习");	
	}
}

class Worker : Person
{
	/*
	public string name;
	public int age;
	
	public void Speak()
	{
		System.Console.WriteLine(name + ".." + age);	
	}*/
	
	public void Work()
	{
		System.Console.WriteLine("工作");	
	}
}

/*
不支持多继承的原因：如果多个父类中包含相同的成员会产生不确定性。
class A
{
	public void Show()
	{
		System.Console.WriteLine("A");	
	}	
}

class B
{
	public void Show()
	{
		System.Console.WriteLine("B");	
	}	
}

class C : A, B
{
	public void Show()
	{
		System.Console.WriteLine("A");	
	}	
	
	public void Show()
	{
		System.Console.WriteLine("B");	
	}	
}
*/

/*
不要为了单纯提高代码复用性而使用继承
class C 
{
	public void Show1() {}
}

class A : C
{
	//public void Show1() {}
	public void Show2() {}	
}

class B : C
{
	//public void Show1() {}
	public void Show3() {}	
}
*/
```

* new关键字可以隐藏父类变量
```C#
class InheritDemo2
{
  static void Main(string[] args)
  {
		new B().Show();
  }
}

class A
{
	public int num = 3;	
}

class B : A
{
	public new int num = 4;//new 关键字可以隐藏父类变量
	
	public void Show()
	{
		System.Console.WriteLine(base.num);	
	}
}
```

对于子父类中相同声明的函数有两种处理办法：

1. 隐藏

1. 覆盖（重写，复写），override

对于隐藏和覆盖。最后都是调用子类中的内容。区别就在于多态中的使用，绝大多数情况下，对于方法，都是用覆盖进行处理

覆盖的注意事项：

1. 子类方法覆盖父类方法时，父类方法必须是public修饰的，子类也得是public

1. 当需要实现覆盖时，需要把父类方法修饰成virtual,子类中什么方法覆盖就修饰成override

权限修饰符：

public 公有的，权限最大，其他的任何程序都能够访问

private 私有的，权限最小，只有所在的类的内部才能访问

protected 受保护的，权限中等，只有所在的类的内部以及其子类可以访问

```C#
class InheritDemo
{
  static void Main(string[] args)
  {
		new B().Show();
  }
}

class A
{
	private int num = 3;
	
	public int Num
	{
		get{return num;}
		set{num = value;}	
	}
	
	//virtual关键字，修饰符
	public virtual void Show()//子父类方法声明相同，被virtual修饰的方法叫虚方法
	{
		System.Console.WriteLine("A");
	}
}

class B : A
{
	//private new int num = 4;
	
	public void Method()
	{
		System.Console.WriteLine(num);	
	}
	
	/*
	使用隐藏处理
	public new void Show()
	{
		System.Console.WriteLine("B");	
	}
	*/
	
	//子类可以把父类虚方法进行覆盖，override也是关键字，表示对父类方法的覆盖
	public override void Show()
	{
		System.Console.WriteLine("B");
	}
}
```
```C#
//定义一个父类，里面有Show方法为打印"Fu"
  class Fu
  {
    public virtual void Show()  //用virtual关键字修饰需要被子类重新实现的方法，也可叫虚方法
    {
      Console.WriteLine("Fu");
    }
  }

  //定义一个子类继承父类，子类有自己的Show方法为打印"Zi"
  class Zi : Fu
  {
    public override void Show()   //重新实现父类的Show方法
    {
      Console.WriteLine("Zi");
    }
  }

  //Main函数
  Main()
  {
    new Zi().Show();  //调用“Show()”方法会打印出子类的方法"Zi"
  }
```

## sealed关键字


实例化子类。会先调用父类的无参构造函数。只有实例化父类，子类才能使用父类里的内容

sealed关键字：密封的。可以修饰类及方法

修饰类时，表示这个类不能被继承，

修饰方法时，表示这个方法不能被重写，但是sealed修饰的方法必须由override修饰。必须同时出现。

继承的弊端：在一定程度上打破了封装性，

sealed特点：

1. sealed是修饰符。可以修饰类、方法、变量（字段）

1. 修饰的类不能被继承。

1. sealed修饰的方法不能被覆盖，必须和override一起

```C#
class InheritDemo2
{
  static void Main(string[] args)
  {
		new B();
  }
}

 class A
{
	public A()
	{
		System.Console.WriteLine("A");	
	}
	
	public A(int a)
	{
		System.Console.WriteLine(a);
	}

	public virtual void Show()
	{
		
	}
}

class B : A
{
	public B() : base(10)//默认调用父类的无参构造函数
	{
		System.Console.WriteLine("B");	
	}
	
	//sealed修饰方法时必须要和override一起使用，表示此方法不能被重写。
	public sealed override void Show()
	{
		System.Console.WriteLine("B");
	}
}

class C : B
{
	public override void Show()
	{
		System.Console.WriteLine("C");
	}
}

/*
在C#中，默认所有类都是Object的子类。Object是所有类的父类。
class A : Object
{
	public A() : base()
	{
		return;
	}
}
*/

/*继承的弊端
sealed class Demo
{
	底层重要资源	
}

class Demo2 : Demo
{
	System.Console.WriteLine("haha ");
}
*/
```







































