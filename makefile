.SILENT:

all:
	make lab5

lab5: 
	echo Printing .md file of exercises from textbook.
	cat ./exercise5/textex5.md

	echo Running Sum Of Digits
	g++ -std=c++14 -o ./executables/sumofdigits ./exercise5/sumofdigits.cpp && ./executables/sumofdigits<./exercise5/number.txt

	printf "\n"

	echo Running Prime Numbers
	g++ -std=c++14 -o ./executables/primenumbers ./exercise5/primenumbers.cpp && ./executables/primenumbers

	printf "\n"

	echo Running Linear Regression
	g++ -std=c++14 -o ./executables/linearregression ./exercise5/linearregression.cpp && ./executables/linearregression<./exercise5/linear_regression_input.txt
	

	




