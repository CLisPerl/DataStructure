CC = gcc
CFAGS = -W -Wall
TARGET = main
OBJECTS = NightDutyMain.o CLinkedList.o

all : $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o main
