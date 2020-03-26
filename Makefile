CC = gcc
SRC = $(wildcard src/backend/*.c) $(wildcard resource/decks/*.c) $(wildcard resource/cards/*.c)
OBJ = $(SRC:.c=.o)
TEST = test

%.o: %.c
	$(CC) -g -c $< -o $@

$(TEST): $(OBJ)
	$(CC) $(OBJ) -o $(TEST)

.PHONY: clean
clean: $(TEST)
	@rm $(OBJ) $(TEST)
