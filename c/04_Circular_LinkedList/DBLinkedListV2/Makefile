CC = gcc
CFLAGS = -Wall -Wextra -g

TARGET = DBLinkedList
SRCS = DBLinkedListMain.c DBLinkedList.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)
