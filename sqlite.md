![](https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1489587487490&di=9a3c59b34edca317d969e8199150a31f&imgtype=0&src=http%3A%2F%2Fimg.blog.csdn.net%2F20160429083335956)

# sqlite知识
1. sqlite是什么？
   SQLite是一个进程内的库，实现了自给自足的、无服务器的、零配置的、事务性的 SQL 数据库引擎。它是一个零配置的数据库，
   这意味着与其他数据库一样，您不需要在系统中配置。就像其他数据库，SQLite 引擎不是一个独立的进程，可以按应用程序需
   求进行静态或动态连接。SQLite 直接访问其存储文件。
2. 查询如何在ubuntu中安装sqlite数据库(sudo apt-get install sqlite3)
3. 如何在ubuntu的命令行中使用sqlite的命令进行数据库操作
   数据库文件：sqlite中是以一个独立的文件存在，所有的数据都存储在该文件中 (sqlite3 数据库名称)
   数据库表格：属于数据库文件中的一部分，表格是用于存储具体的数据
   (数据库文件 > 数据库表格 > 具体数据)
4. 学习sqlite常用命令.txt
5. 在ubuntu中安装 C语言的sqlite3函数库
# 安装sqlite的C语言库
```sh
1. sudo apt- get update
1. sudo apt-get install  libsqlite3-dev
   检查是否安装成功： cd  /usr/include 中查看是否有sqlite3.h文件
```
# sqlite基本命令
1. 建数据库：
```sh
    sqlite3 test.db /*注意sqlite的版本*/
```
2. 查看帮助：
```sh
    sqlite>.help
```
3. 文件存放位置:
```sh
    sqlite>.database
```
4. 退出：
```sh
    sqlite>.quit
```
5. 查看表：
```sh
    sqlite>.tables
```
6. 显示表的结构：
```sh
    sqlite>.schema
```
# sqlite3常见语句：

1. 创建表：

    sqlite> create table usr(id integer primary key, name text, age integer null, gender text,
    salary real not null);

2. 删除表

    sqlite> drop table usr；

3. 插入数据：

    sqlite> insert into usr(id, name, age, salary) values(2, ‘liu’, 20, 6000);

4. 删除数据:

    sqlite> delete from usr where id = 2 and name = ‘lisi’；//删除一条记录

    sqlite> delete from usr where id = 2 or name = ‘lisi’；// and(与）or（或）

5. 修改数据：

    sqlite> update usr set gender = ‘man’，name = ‘lisi’ where id = 3;

6. 查询数据：

    sqlite> select * from usr where id = 2;

7. 修改表的名称:

    sqlite> alter table oldname rename to newname;


# 网址
 [English URL](https://www.sqlite.org/index.html)
 
 [中文参考网站](http://www.runoob.com/sqlite/sqlite-tutorial.html)
 
 
 # sqlite的一些常用的API
 
1. sqlite里最常用到的是sqlite3 *类型。从数据打开开始，sqlite就要为了这个类型准备好内存，直到数据库关闭
   整个过程都需要用到这个类型。当数据库打开时开始，这个类型的变量代表了你要操作的数据库，即句柄。
1. int sqlite_open(char *path,sqlite3 **db);
   功能：打开sqlite数据库
   path:数据库文件路径（如果不存在，则创建）
   db:指向sqlite句柄的指针
   返回值：如果是SQLITE_OK则表示操作正常，相关的返回值sqlite定义了一些宏。具体这些宏的含义可以参考sqlite.h文件。
1. int sqlite3_close(sqlite *db);
   功能：关闭sqlite数据库
   返回值：成功返回0.失败返回错误代码
1. const char *sqlite3_errmsg(sqlite3 *db);
   返回值：返回错误信息
1. 
   
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 


![](http://www.runoob.com/wp-content/themes/runoob/assets/img/404.jpg)


