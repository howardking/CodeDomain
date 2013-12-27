#!/bin/bash
#Script: sh_001.sh
#Creation date:2011-5-10
#Last Modified:---------
#Author: Shuaihua Wang
#E-mail:hangtian2008-20005@hotmail.com
#Description: This program is used to print you full name

PATH=/bin:/sbin:/usr/bin:usr/sbin:usr/local/bin:usr/local/sbin:~bin
export PATH

read -p "Please input you first name:" firstname
read -p "Please input you last name :" lastname

echo   "\nYou full name is \"$firstname $lastname\"  \n"
exit 0
