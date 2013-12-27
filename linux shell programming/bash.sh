#!/bin/bash
# Program:
#      This Program shows "Hello World !" in your screen.
# History:
# 2010/10/15  ��˧��  First release
PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:~/bin

export PATH
echo -e "Hello World ! \a \n"
exit 0


#!/bin/bash
# Program:
#    User input his first name and last name. Program shows his full name
# History:
# 2010/10/15   ��˧��  First release
PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:/~bin
export PATH

read -p "Please input your first name :"  firstname  #��ʾ�Ñ�ݔ���һ������
read -p "Please input your last name :" lastname     #��ʾ�Ñ�ݔ�����һ������ 
echo -e "\nYour full name is : $firstname $lastname" #ݔ���Ñ���ȫ��


#!/bin/bash
# Program:
#    Program creates three files ,which named by user's input
#    and date command.
# History:
# 2010-10-17 ��˧�� First Release
PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:~/bin
export PATH

#1.���û������ļ�����ȡ��fileuser�������
echo -e "I will use 'touch' to create 3 files. "  #������ʾ��Ϣ
echo -e "Please input your filename : " fileuser  #������ʾ�û�����


#2.Ϊ�˱����û����ⰴ��enter�ݣ����ñ������ܷ����ļ����Ƿ�������
filename=${fileuser:-"filename"}                  #��ʼ�ж��Ƿ��������ļ���


#3.��ʼ��date����ȡ��ȡ��������û��ļ�����
date1=$(date --date='2 days ago' +%Y%m%d)         #����ǰ������
date2=$(date --date='1 days ago' +%Y%m%d)          #ǰһ�������
date3=$(date +%Y%m%d)                             #���������
file1=${filename}${date1}
file2=${filename}${date2}
file3=${filename}${date3}


#4.�����ļ���
touch "file1"
touch "file2"
touch "file3"


#!/bin/bash
# Program:
#    User input two integer numbers; program will cross these two numbers.
# History:
# 2010-10-17 ��˧�� First Release
PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:~/bin
export PATH

echo -e "You SHOULD input two numbers, I will cross them! \n"
read -p "first number : " firstnum
read -p "second number : " secnum
#total=$ ( ($firstnum * $secnum) )    There is a error ocurred at this line
echo -e "\nThe result of $firstnum x $secnum ==>$firstnum*$secnum"
