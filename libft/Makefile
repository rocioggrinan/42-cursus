LIB_SRC = ft_atoi.c\
    ft_isalnum.c\
	ft_isdigit.c\
	ft_memcmp.c\
	ft_memset.c\
	ft_strlcat.c\
	ft_strncmp.c\
	ft_tolower.c\
	ft_bzero.c\
   	ft_isalpha.c\
	ft_isprint.c\
	ft_memcpy.c\
	ft_strchr.c\
	ft_strlcpy.c\
	ft_strnstr.c\
	ft_toupper.c\
	ft_calloc.c\
	ft_isascii.c\
	ft_memchr.c\
	ft_memmove.c\
	ft_strdup.c\
	ft_strlen.c\
	ft_strrchr.c


G = \033[1;32m
R = \033[0;31m
NC = \033[0m

NAME = libft.a
LIB_OBJ_DIR = objects
LIB_OBJ = $(patsubst %.c, $(LIB_OBJ_DIR)/%.o, $(LIB_SRC))
CC = cc
all: $(NAME)
	@echo "$(G)██████╗  ██████╗  ██████╗██╗ ██████╗ $(NC)"
	@echo "$(G)██╔══██╗██╔═══██╗██╔════╝██║██╔═══██╗$(NC)"
	@echo "$(G)██████╔╝██║   ██║██║     ██║██║   ██║$(NC)"
	@echo "$(G)██╔══██╗██║   ██║██║     ██║██║   ██║$(NC)"
	@echo "$(G)██║  ██║╚██████╔╝╚██████╗██║╚██████╔╝$(NC)"
	@echo "$(G)╚═╝  ╚═╝ ╚═════╝  ╚═════╝╚═╝ ╚═════╝ $(NC)"
	@echo "$(G)----------------------------------------------------------------------------------------------------$(NC)"
	@echo "$(G)------------------------------------------ Libft Is Ready ------------------------------------------$(NC)"
	@echo "$(G)----------------------------------------------------------------------------------------------------\n$(NC)"
$(NAME): $(LIB_OBJ) libft.h
	@ar -rcs $(NAME) $(LIB_OBJ)
	@printf "%-106s\r" ""
	@echo "$(G)------------------------------------ Libft.a Finished Compiling ------------------------------------$(NC)\n"
$(LIB_OBJ_DIR):
	@mkdir -p $(LIB_OBJ_DIR)
$(LIB_OBJ_DIR)/%.o: %.c | $(LIB_OBJ_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<
	@printf "%-200s\r" ">Libft compiling: ""$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<"
clean:
	@rm -rf $(LIB_OBJ_DIR)
	@echo "$(R)-------------------------------------- Libft Has Been Cleaned --------------------------------------$(NC)"
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re