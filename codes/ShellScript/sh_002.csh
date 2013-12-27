#!/bin/csh
#Script: sh_002.sh
#Creation date:2011-5-10
#Last modefied:---------
#Author: Shuaihua Wang
#E-mail:hangtian2008-2005@hotmail.com
#Decription:This program is used to count for "1+2+3+4+……+100"

#PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:~bin
#export PATH

set n=100
set sum=0
set i=0
for((i=1; i <= 100; i=i+1))
do 
       @sum+=$i
done

echo "The sum of \"1+2+3+......+100\"==>$sum"

#This program occured a syntactical error at the 15th line
#and I do not known how to correct it ,so it is not solved yet
