CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = CLinkedList
SRCS = CLinkedListMain.c CLinkedList.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)
