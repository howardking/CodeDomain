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
