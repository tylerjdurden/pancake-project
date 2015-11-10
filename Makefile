all: Main

Main: Graph.o GUI.o Window.o Simple_window.o Game_window.o Pancake.o main.o
	g++ -std=c++14 -g Graph.o GUI.o Window.o Simple_window.o Game_window.o Pancake.o main.o -o Main -lfltk -lfltk_images
Graph.o: Graph.cpp
	g++ -std=c++14 -g -c Graph.cpp -o Graph.o -lfltk -lfltk_images
GUI.o: GUI.cpp
	g++ -std=c++14 -g -c GUI.cpp -o GUI.o -lfltk -lfltk_images
Window.o: Window.cpp
	g++ -std=c++14 -g -c Window.cpp -o Window.o -lfltk -lfltk_images
Simple_window.o: Simple_window.cpp
	g++ -std=c++14 -g -c Simple_window.cpp -o Simple_window.o -lfltk -lfltk_images
Game_window.o: Game_window.cpp
	g++ -std=c++14 -g -c Game_window.cpp -o Game_window.o -lfltk -lfltk_images
Pancake.o: Pancake.cpp
	g++ -std=c++14 -g -c Pancake.cpp -o Pancake.o -lfltk -lfltk_images
main.o: main.cpp
	g++ -std=c++14 -g -c main.cpp -o main.o -lfltk -lfltk_images
clean:
	rm *.o Main

run:
	./Main
