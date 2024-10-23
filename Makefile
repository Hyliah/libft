NAME := libft.a
CFLAGS= -Wall -Werror -Wextra -I./

SRCS= ft_isdigit.c ft_putstr_fd.c ft_strncmp.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_split.c ft_strnstr.c ft_itoa.c ft_strchr.c \
	ft_strrchr.c ft_memcmp.c ft_strdup.c ft_strtrim.c \
	ft_memcpy.c ft_isprint.c ft_striteri.c ft_substr.c \
	ft_memchr.c ft_memmove.c ft_strjoin.c  ft_tolower.c \
	ft_bzero.c ft_memset.c ft_calloc.c ft_toupper.c \
	ft_putchar_fd.c ft_strlcpy.c ft_isalpha.c \
	ft_strlen.c ft_isascii.c ft_strmapi.c ft_strlcat.c ft_isalnum.c ft_atoi.c

B_SRCS = ft_lstadd_back.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \
	ft_lstsize.c ft_lstadd_front.c ft_lstdelone.c ft_lstlast.c \
	ft_lstnew.c

OBJDIR= ./obj/



OBJS = ${SRCS:%.c=${OBJDIR}%.o}
OBJS_BONUS = ${B_SRCS:%.c=${OBJDIR}%.o}

all: $(NAME)

${OBJDIR}%.o: %.c
	@mkdir -p ${OBJDIR}
	@printf "Compiling %s\n" $<
	@gcc -c $(CFLAGS) $< -o $@

bonus: $(OBJS_BONUS)
	@printf "making bonus\n"
	@ar -rcs $(NAME) $(OBJS_BONUS)

$(NAME): $(OBJS)
	@printf "Compiled library\n"
	@ar -rcs $(NAME) $(OBJS)

re: fclean all

clean:
	@echo Cleaning out those old .o
	@rm -f $(OBJS)

fclean: clean
	@echo Cleaning out that old $(NAME)
	@rm -f $(NAME)

so:
	gcc -nostartfiles -fPIC $(CFLAGS) -c $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: clean fclean re all bonus