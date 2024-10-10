.PHONY: clean

test: option2.h option2.c test_option2.c
	clang -Wall -o test option2.c test_option2.c -lcriterion -lm
clean:
	rm -rf a.out test
