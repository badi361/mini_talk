SERVER= server

CLIENT= client

NAME= all

CC= gcc

CFLAGS= -Wall -Wextra -Werror -g

RM= rm -rf

all: $(SERVER) $(CLIENT)

$(SERVER):
	$(CC) $(CFLAGS) server.c -o server

$(CLIENT):
	$(CC) $(CFLAGS) client.c -o client

clean:
	$(RM) $(SERVER) $(CLIENT)

fclean: clean
	$(RM) $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all clean fclean re bonus