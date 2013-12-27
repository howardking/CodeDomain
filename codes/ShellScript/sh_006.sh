#!/bin/bash
#Script:sh_006.sh
#Creation date:2011-5-10
#Last Modefied:---------
#Author: Shuaihua Wang
#E-mail: hangtian2008-2005@hotmail.com
#Description: Before the program begin to calc the result,you must input a number ,
#             so "1+2+3+......+$inputnumber" will be counted

PATH=/bin:/sbin:/usr/bin:/usr/sbin:usr/local/bin:usr/local/sbin:~bin
export PATH

sum=0
for i in `cat text`
do
	sum=`expr $sum + $i`
done

echo "The result is $sum"
