#!/bin/sh
#Script: sh_003.sh
#Creation date:2011-5-10
#Last Modefied:---------
#Author: Shuaihua Wang
#E-mail: hangtian2008-2005@hotmail.com
#Description: This program used the method "for" to count "1+2+3+......+100"

PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:~bin
export PATH
s=0
for i in `seq 1 100`
do
s=`expr $s + $i`
done
echo $s
