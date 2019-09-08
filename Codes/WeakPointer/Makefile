FLAGS = -Wextra -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wnoexcept -Wold-style-cast -Woverloaded-virtual -Wredundant-decls -Wshadow -Wsign-promo -Wstrict-null-sentinel -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused --no-exceptions --no-use-cxa-atexit -std=c++0x -O2 -Wall -Werror -fexceptions -Wsign-conversion

appTest:
	g++ -c $(FLAGS) *.cpp
	g++ *.o -o appTest

all:
	make appTest

clean:
	rm -rf *.o || true
	rm -rf appTest || true

run:
	./appTest

valgrind:
	valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes ./appTest

xtermValgrind:
	xterm -e 'valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes ./appTest; read -n 1 -p "Press any key to finish..." "mainmenuinput"'

Debug: clean appTest xtermValgrind
