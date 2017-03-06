CC = gcc
CFAGS = -W -Wall
TARGET = main
OBJECTS = Deque.o DequeMain.o

all : $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o main
