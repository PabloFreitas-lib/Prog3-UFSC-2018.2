Rational:	
	g++ *.cpp -o Rational -g
all:
	make Rational

clean:
	rm Rational

run:
	valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes ./Rational
