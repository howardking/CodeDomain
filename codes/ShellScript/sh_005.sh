#!/bin/bash
#Script:sh_005.sh
#Creation date:2011-5-10
#Last Modified:---------
#Author: Shuaihua Wang
#E-mail:hangtian2008-2005@hotmail.com
#Description: This program is used to count "1+2+3+......+100" by the method while

PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:~bin
export PATH

num=1
totalnum=0
while [ $num -le 100 ]
do
        totalnum=$(($totalnum+$num))
        num=$(($num+1))
done
echo "Total munber= $totalnum"
