CC := g++
FLAGS := -std=c++20 -g -fsanitize=address -I../

tests: tests.cpp
	$(CC) -o tests tests.cpp $(FLAGS) -lCatch2
	./tests

retest: clean tests

draft:
	rm -f main_draft
	$(CC) -g draft.cpp -o main_draft $(FLAGS)
	./main_draft

clean:
	rm -f main main_draft tests
