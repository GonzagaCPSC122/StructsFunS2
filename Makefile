# make is a program that runs rules in a Makefile
# make 
# run the first rule
# make compile
# run only the compile rule

all:
	g++ Main.cpp Structs.cpp -o runStructsFun
	./runStructsFun
compile:
	g++ Main.cpp Structs.cpp -o runStructsFun
run:
	./runStructsFun
