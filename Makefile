CC = gcc
CFAGS = -W -Wall
TARGET = main
OBJECTS = PostCalculatorMain.o PostCalculator.o ListBaseStack.o InfixToPostfix.o InfixCalculatorMain.o

all : $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm *.o main
