FLAGS = -Wextra -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wnoexcept -Wold-style-cast -Woverloaded-virtual -Wredundant-decls -Wshadow -Wsign-conversion -Wsign-promo -Wstrict-null-sentinel -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused --no-exceptions --no-rtti --no-use-cxa-atexit -std=c++0x -O2 -Wall -Werror -fexceptions 

OneRunWay:
	g++ -c $(FLAGS) *.cpp
	g++ *.o -o OneRunWay

all:
	make OneRunWay

clean:
	rm *.o
	rm OneRunWay

run:
	valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes ./OneRunWay
