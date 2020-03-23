CC = gcc
SRC = $(wildcard src/backend/*.c) $(wildcard resource/*.c)
OBJ = $(SRC:.c=.o)
TEST = test

%.o: %.c
	$(CC) -g -c $< -o $@

$(TEST): $(OBJ)
	$(CC) $(OBJ) -o $(TEST)

.PHONY: clean
clean: $(TEST)
	@rm $(OBJ) $(TEST)
