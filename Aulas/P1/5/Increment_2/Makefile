appTest:
	g++ -c *.cpp
	g++ *.o -o appTest

all:
	make appTest

clean:
	rm -rf *.o || true
	rm -rf appTest || true

run:
	valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes ./appTest

Debug: clean all run
