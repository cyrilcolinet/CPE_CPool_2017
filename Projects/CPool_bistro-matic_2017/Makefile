.PHONY: all clean fclean re tests

LIB_SRC				= ./lib/my
LIB_DIR				= ./lib
INC_DIR				= ./include
SRC_DIR				= ./src
SRC				= $(SRC_DIR)/*.c $(SRC_DIR)/main/main.c
BINARY_NAME			= calc

COMPILE_LIB			= make -C $(LIB_SRC)
FCLEAN_LIB			= make fclean -C $(LIB_SRC)
UNITARY_TESTS_DIR		= tests
UNITARY_TESTS_SRC		= $(SRC_DIR)/*.c $(UNITARY_TESTS_DIR)/*.c
UNITARY_TESTS_BINARY_NAME	= units
UNITARY_TESTS_DEFAULT_FLAGS	= -Wall -Wextra --coverage
UNITARY_TESTS_FLAGS		= $(UNITARY_TESTS_DEFAULT_FLAGS) -lcriterion -L$(LIB_DIR) -I$(INC_DIR) -lgcov -lmy

DEFAULT_FLAGS			= -Wall -Wextra
FLAGS				= $(DEFAULT_FLAGS) -L$(LIB_DIR) -I$(INC_DIR) -lmy

# Compile all with library
all: library
	gcc -o $(BINARY_NAME) $(SRC) $(FLAGS)

# Compile library
library:
	$(COMPILE_LIB)

# Clean output file
clean:
	rm -f *.o

# Clean binary files and output files
fclean: clean
	rm -f $(BINARY_NAME)
	$(FCLEAN_LIB)
	rm -f $(UNITARY_TESTS_BINARY_NAME)
	rm -rf *.gc*

# Recompile after clean bin files and output files
re: fclean all

# Start unit tests
tests: library
	gcc -o $(UNITARY_TESTS_BINARY_NAME) $(UNITARY_TESTS_SRC) $(UNITARY_TESTS_FLAGS)
	./$(UNITARY_TESTS_BINARY_NAME)
