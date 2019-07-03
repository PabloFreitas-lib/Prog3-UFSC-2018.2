Teste:
	g++ *.cpp -o Teste -g;

all:
	make Teste

clean:
	rm Teste

run:
	valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes ./Teste
