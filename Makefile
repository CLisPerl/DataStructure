CC = gcc
CFAGS = -W -Wall
TARGET = main
OBJECTS = CLinkedListStack.o CLinkedListStackMain.o

all : $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o main
