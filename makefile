run: compile
	./algoritmos

compile:
	clang++ -o algoritmos main.cpp bubble_sort.cpp 

clear:
	rm algoritmos
