NAME := libft.a

SRCS= ft_atoi. ft_isalnum.c ft_isdigit.c ft_memchr.c ft_memmove.c ft_strdup.c \
	ft_strlen.c ft_strrchr.c ft_bzero.c ft_isalpha.c ft_isprint.c ft_memcmp.c 
		 ft_memset.c 
			ft_strlcat.c ft_strncmp.c ft_tolower.c ft_calloc.c ft_isascii.c 
			ft_itoa.c ft_memcpy.c ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_toupper.c

OBJS= ${SRCS:%.c=$SRCS:%.o}

all: $(NAME)

clean: @echo Cleaning the .o