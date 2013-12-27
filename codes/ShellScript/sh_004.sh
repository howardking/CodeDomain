#!/bin/bash
#Script:sh_004.sh
#Creation date:2011-5-10
#Last modified:---------
#Author: Shuaihua Wang
#E-mail:hangtian2008-2005@hotmial.com
#Description:This program is used to count "1+2+3+......+100"
PATH=/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin:/usr/local/sbin:~bin
export PATH
s=0
for i in $(seq 1 100)
do
	s=$(($s+$i))
done
echo $s 
