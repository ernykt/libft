NAME=libft.a
CODEDIRS=.

CC=gcc
CFLAGS=-Wall -Wextra -Werror
CFILES=$(foreach D, $(CODEDIRS), $(wildcard $(D)/*.c))
OBJECTS=$(patsubst %.c, %.o, $(CFILES))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) -o libft.so $(OBJECTS)
	gcc -nostartfiles -shared -o libft.so $(OBJECTS)

.PHONY: all clean fclean re so
