NAME = Bureaucrat

SOURCES =   main.cpp \
			Bureaucrat.cpp \
			AForm.cpp \
			PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp \
			ShrubberyCreationForm.cpp \
			Intern.cpp

HEADER =   	Bureaucrat.hpp \
			AForm.hpp \
			PresidentialPardonForm.hpp \
			RobotomyRequestForm.hpp \
			ShrubberyCreationForm.hpp \
			Intern.hpp

			

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