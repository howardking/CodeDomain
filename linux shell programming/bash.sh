#!/bin/bash
# Program:
#      This Program shows "Hello World !" in your screen.
# History:
# 2010/10/15  王帅华  First release
PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:~/bin

export PATH
echo -e "Hello World ! \a \n"
exit 0


#!/bin/bash
# Program:
#    User input his first name and last name. Program shows his full name
# History:
# 2010/10/15   王帅华  First release
PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:/~bin
export PATH

read -p "Please input your first name :"  firstname  #提示用戶輸入第一个名字
read -p "Please input your last name :" lastname     #提示用戶輸入最后一个名字 
echo -e "\nYour full name is : $firstname $lastname" #輸出用戶的全名


#!/bin/bash
# Program:
#    Program creates three files ,which named by user's input
#    and date command.
# History:
# 2010-10-17 王帅华 First Release
PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:~/bin
export PATH

#1.让用户输入文件名并取得fileuser这个变量
echo -e "I will use 'touch' to create 3 files. "  #纯粹显示信息
echo -e "Please input your filename : " fileuser  #用来表示用户输入


#2.为了避免用户随意按［enter］，利用变量功能分析文件名是否有设置
filename=${fileuser:-"filename"}                  #开始判断是否有配置文件名


#3.开始用date命令取得取得所需的用户文件名了
date1=$(date --date='2 days ago' +%Y%m%d)         #两天前的日期
date2=$(date --date='1 days ago' +%Y%m%d)          #前一天的日期
date3=$(date +%Y%m%d)                             #今天的日期
file1=${filename}${date1}
file2=${filename}${date2}
file3=${filename}${date3}


#4.创建文件名
touch "file1"
touch "file2"
touch "file3"


#!/bin/bash
# Program:
#    User input two integer numbers; program will cross these two numbers.
# History:
# 2010-10-17 王帅华 First Release
PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:~/bin
export PATH

echo -e "You SHOULD input two numbers, I will cross them! \n"
read -p "first number : " firstnum
read -p "second number : " secnum
#total=$ ( ($firstnum * $secnum) )    There is a error ocurred at this line
echo -e "\nThe result of $firstnum x $secnum ==>$firstnum*$secnum"
