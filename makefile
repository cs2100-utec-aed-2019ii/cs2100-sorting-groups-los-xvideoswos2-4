run: compile
	./algoritmos

compile:
	clang++ -o algoritmos main.cpp

clear:
	rm algoritmos
