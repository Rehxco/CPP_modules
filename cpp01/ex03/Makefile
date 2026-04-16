NAME = weapon

SOURCES = Weapon.cpp \
		  HumanB.cpp \
		  HumanA.cpp \
		  main.cpp 

HEADER = Weapon.hpp \
		  HumanB.hpp \
		  HumanA.hpp \

OBJ_DIR = obj


OBJECTS = $(SOURCES:%.cpp=$(OBJ_DIR)/%.o)

CC = c++ 

CFLAGS = -Wall -Wextra -Werror -std=c++98 

RM = rm -rf 

all: $(NAME) 


$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) 


$(OBJ_DIR)/%.o: %.cpp $(HEADER) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@ 


$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean: 
	$(RM) $(OBJ_DIR) 

fclean: clean
	$(RM) $(NAME) 

re: fclean all 

.PHONY: all clean fclean re 