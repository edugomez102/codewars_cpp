CC      := g++
FLAGS   := -std=c++20 -g -fsanitize=address
INCLUDE := -I../

test: tests.cpp exercise.o
	$(CC) -o tests tests.cpp exercise.o $(FLAGS) -lCatch2
	./tests

retest: clean tests

draft: exercise.o
	$(CC) -o main_draft draft.cpp exercise.o $(FLAGS)
	./main_draft

excercise.o: exercise.cpp exercise.hpp
	$(CC) -c exercise.cpp -o exercise.o $(FLAGS)

clean:
	rm -f main main_draft tests
	rm *.o
