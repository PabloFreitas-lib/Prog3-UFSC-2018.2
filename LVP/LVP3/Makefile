Lvp2:
	g++ *.cpp -o Lvp2 -g -Wall
all:
	make Lvp2

clean:
	rm Lvp2

run:
	valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes ./Lvp2	
