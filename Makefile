# Makefile

NAME = your_src_file
CC = g++

$(NAME): $(NAME).cpp
    $(CC) -I path/to/include/ $^ -o $@
