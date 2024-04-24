CC = gcc
CFLAGS = -Wall
LDFLAGS = -lm

SRCS = oscilador_armonico.c
EXEC = oscilador_armonico

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(SRCS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

run: $(EXEC)
	./$(EXEC)