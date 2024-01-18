CC      := g++
FLAGS   := -std=c++20 -g -fsanitize=address
INCLUDE := -I../

test: tests.cpp exercise
	$(CC) -o tests tests.cpp exercise.o $(FLAGS) -lCatch2
	./tests

retest: clean tests

draft: draft.cpp exercise
	$(CC) -o main_draft draft.cpp exercise.o $(FLAGS)
	./main_draft

exercise: exercise.cpp exercise.hpp
	$(CC) -c exercise.cpp $(FLAGS)

clean:
	rm -f main main_draft tests
	rm *.o
