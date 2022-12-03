.SILENT:

all:
	make lab10

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

lab7:
	echo Running Rectangle
	g++ -std=c++14 -o ./executables/rectangle ./exercise7/rectangle.cpp

	echo Printing .cpp file of Constructors
	cat ./exercise7/constructors.cpp

	echo Printing .md file of Struct
	cat ./exercise7/struct.cpp
	
lab10:	
	echo Running Exercise10
	g++ -std=c++14 -o ./executables/exercise10 ./exercise10/exercise10.cpp && ./executables/exercise10

	echo printing .cpp file of exercise10
	cat ./exercise10/exercise10.cpp





