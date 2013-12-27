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

