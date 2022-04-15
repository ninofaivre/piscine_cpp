#!/bin/bash

OK="\U2705"
KO="\U274C"

C_RESET="\e[0m"
C_PURPLE="\e[34m"
C_RED="\e[31m"
C_GREEN="\e[32m"

FILE_PREFIX="cpp00-02"

echo -n -e "${C_RESET}"

function	help
{
	echo -e "usage : ./${FILE_PREFIX}_tester.sh [LOG_PATH] [EXECUTABLE]"
	exit
}

function	check_param
{
	cat $1 1>>/dev/null 2>>/dev/null
	if [ $? -eq "1" ]; then
		echo -e "${C_RED}unable to cat [LOG_PATH]${C_RESET}"
		help
	fi
	$2 1>>/dev/null 2>>/dev/null
	if [ $? -ne "0" ]; then
		echo -e "${C_RED}unable to execute [EXECUTABLE]${C_RESET}"
		help
	fi
}

function	export_output
{
	cat $1 | awk '{print $2}' > /tmp/${FILE_PREFIX}_right_output
	$2 | awk '{print $2}' > /tmp/${FILE_PREFIX}_tested_output
}

function	print_res
{
	diff /tmp/${FILE_PREFIX}_right_output /tmp/${FILE_PREFIX}_tested_output 1>>/dev/null 2>>/dev/null
	if [ $? -eq "0" ]; then
		echo -e "${OK} ${C_GREEN}right output, congratulation !${C_RESET}"
	else
		echo -e "${KO} ${C_RED}wrong output, try again${C_RESET}"
	fi
}

function	clean
{
	rm /tmp/${FILE_PREFIX}_{right_output,tested_output}
}

if [ $# -ne "2" ]; then
	echo -e "${C_RED}wrong number of parameters${C_RESET}"
	help
fi

check_param $1 $2
export_output $1 $2
print_res
clean
