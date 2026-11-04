CC      = gcc
SRC     = main.c
OUT     = bin/main
CFLAGS  = -Wall -Wextra -I include
LDFLAGS = -L lib -Wl,-rpath,'$$ORIGIN/../lib'
LDLIBS  = -l raylib

all: $(OUT)

$(OUT): $(SRC)
	mkdir -p bin
	$(CC) $(CFLAGS) $(SRC) $(LDFLAGS) $(LDLIBS) -o $(OUT)

run: $(OUT)
	./$(OUT)

clean:
	rm -f $(OUT)

.PHONY: all run clean
