#!/bin/sh
i=1

function check_case {
	grep "cas$1" cas
}

function test {
	rm -f test_output
	rm -f user_output
	if [ ! -e "libftprintf.a" ]
	then
		make re
		make clean
		gcc -w test.c -o ft_printf -L. -lftprintf
	fi
	./ft_printf 0 $1> cas
	./ft_printf 1 $1> test_output
	./ft_printf 2 $1> user_output
	
	DIFF=$(diff test_output user_output)
	if [ "$DIFF" != "" ]
	then
		echo "\033[0;31m KO \033[0m"
		check_case $1
	else
		echo "\033[0;32m OK \033[0m"
	fi
}

if [ $1 == 0 -o $1 == 1 ]
then
	echo "\033[0;34m [A - Tests without options] \033[0m"
	for i in {1..70}
	do
		test $i
	done
fi

if [ $1 == 0 -o $1 == 2 ]
then
	echo "\033[0;34m [B - Tests with minimum field width] \033[0m"
	for i in {71..128}
	do
		test $i
	done
fi

if [ $1 == 0 -o $1 == 3 ]
then
	echo "\033[0;34m [C - Tests with flag -] \033[0m"
	for i in {129..184}
	do
		test $i
	done
fi

if [ $1 == 0 -o $1 == 4 ]
then
	echo "\033[0;34m [D - Tests with flag 0] \033[0m"
	for i in {185..231}
	do
		test $i
	done
fi

if [ $1 == 0 -o $1 == 5 ]
then
	echo "\033[0;34m [E - Tests with .] \033[0m"
	for i in {232..361}
	do
		test $i
	done
fi

if [ $1 == 0 -o $1 == 6 ]
then
	echo "\033[0;34m [F - Tests with minimum field width and .] \033[0m"
	for i in {361..564}
	do
		test $i
	done
fi

if [ $1 == 0 -o $1 == 7 ]
then
	echo "\033[0;34m [G - Tests with minimum field width, flag - and .] \033[0m"
	for i in {565..768}
	do
		test $i
	done
fi

if [ $1 == 0 -o $1 == 8 ]
then
	echo "\033[0;34m [H - Tests with minimum field width, flag 0 and .] \033[0m"
	for i in {769..948}
	do
		test $i
	done
fi

if [ $1 == 0 -o $1 == 9 ]
then
	echo "\033[0;34m [I - Tests with *] \033[0m"
	for i in {949..992}
	do
		test $i
	done
fi

if [ $1 == 10 ]
then
	test $2
	echo "=== test_output ==="
	cat -e test_output
	echo "\n=== user_output ==="
	cat -e user_output
fi

if [ $1 == "rm" ]
then
	make fclean
	rm -f cas ft_printf test_output user_output
fi
