CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = DLinkedList
SRCS = DLinkedListMain.c DLinkedList.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)
