Rectangle:
	g++ *.cpp -o Rectangle

all:
	make Rectangle
clean:
	rm Rectangle
run:
	valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes ./Rectangle
