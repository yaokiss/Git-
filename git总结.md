 ![note](https://camo.githubusercontent.com/94f12a6ecead2e0dbba4ebb971625e802d9dbaff/68747470733a2f2f74696d6773612e62616964752e636f6d2f74696d673f696d616765267175616c6974793d38302673697a653d62393939395f3130303030267365633d313438393439393437303737302664693d343266343838356663616630393137303731643034373937613364383932323626696d67747970653d30267372633d68747470253341253246253246696d616765732e636e626c6f67732e636f6d253246636e626c6f67735f636f6d2532467179663430342532463631323338312532466f5f6769742d6c6f676f2e706e67)
 
 # Git
 
 ## 什么是git
    1.GIT 是一个分布式版本控制软件，最初由林纳斯·托瓦兹（Linus Torvalds）创作，于2005年以GPL发布。
    最初目的是为更好地管理Linux内核开发而设计。是目前世界上最先进的分布式版本控制系统.
    
## git的安装
ubuntu linux 安装方法：
```sh
$ sudo apt-get install git
```

Mac ox 安装方法：
```sh
$ brew install git
```
## 创建git本地仓库
```sh
$ mkdir git
$ cd git
$ mkdir c
$ cd c
$ git init
```
## 增加文件
1. 创建一个新文件。
```sh
$ touch hello.c
$ vim hello.c   //输出hello world字符串的C语言的程序（代码）
```
2. 复制已有的文件到当前目录里：
```sh
$ cp ../../c/*.c .
```
3. 查看目录状态
```sh
$ git status
```
4. 把文件加到仓库中
```sh
$ git add hello.c
```
  查看状态的命令
## 提交
```sh
$ git commit

 First commit

 Init commit.
```
## 配置用户信息
1. 配置用户名
```sh
$ git config --global user.name
```
2. 配置邮箱
```sh
$ git config --global user.email
```
3. 配置编辑器提交信息的编辑器
```sh
$ git config --global core.editor vim
```
## 查看提交信息
```sh
$ git log
  第一行： commit ID
  第二行： 提交作者名子和email.
  第三行： 提交的时间
  第四行： 提交信息标题
  第五行： 提交信息具体内容
```
## git diff
1. 查看修改源码
```sh
$ git diff
```
2. 两个提交版本之间做比较
```sh
$ git diff  commitID-1 commitID-2
```
3. 理解Patch标记格式的含义
## 删除文件
1. 删除文件后， 恢复文件
```sh
$ rm -rf hello.c
$ git status
$ git checkout hello.c
```
2. 从版本库里删除文件。（真正删除文件）
```sh
$ git rm hello.c (or) rm hello.c
$ git status
$ git add .
$ git commit
```
## 版本之间切换
根据commitID， 可以进行版本切换。
```sh
$ git reset --hard commitID
```
## 忽略文件
忽略不需要跟踪到git仓库里的文件
```sh
$ touch .gitignore
$ vim .gitignore
-----
a.out
-----
$ git add .
$ git commit
```
## github
1. 注册github帐号
        1. 注册邮箱， 注意不要使用QQ.com
2. 创建gitc仓库
3. 从github将创建的gitc仓库， 克隆到本地
```sh
$ git clone https://github.com/username/gitc.git
```
4. 将本地仓库与github仓库进行同步， 将本地提交推送到服务器上
```sh
$ git push origin master
  input username:
  input password:
```
5. 更新本地仓库， 与github仓库进行同步。将服务器提交拉取到本地
```sh
$ git pull
```
![git常用命令速查表](https://github.com/Javedhd/notebook/blob/master/img/git%E9%80%9F%E6%9F%A5%E8%A1%A8.jpeg?raw=true)


![速查表](https://github.com/yaokiss/Git-/blob/master/%E5%9B%BE/150803103365301.png?raw=true)














