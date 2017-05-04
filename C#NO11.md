# 继承

### 概念

继承是面向对象三大特征之一，是面向对象语言一项重要的机制，借助继承，可以扩展原有的代码，应用到其他程序中。而不必重新编写这些
代码，具体可以表述为：继承可以使得子类具有父类的内部的大部分内容。而不需要再次编写相同的代码

多个类中存在相同特征或行为。可以将这些相同的内容抽取到单独一个类中，那么多个类无需在定义这些特征和行为
只要继承单独的那个类即可，多个类可以称之为子类，单独这个类称之为父类或者超类，子类可以直接访问父类中的非私有的字段和方法

面向对象三大特征：
* 封装。
* 继承。inherit
* 多态。

子类（派生类）   父类（超类，基类）

继承的好处：提高了代码的复用性。让类与类之间产生了联系，使代码的扩展性更强，，为多态提供了前提。

在C#中只支持单继承，不支持多重继承。但是C#把多继承进行了改良。C++中支持多继承

单继承：一个子类只能有一个直接父类。

多继承：一个子类可以有多个直接父类。

在定义继承时，不要单纯为了提高代码复用性而定义继承
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
