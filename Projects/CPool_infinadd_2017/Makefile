.PHONY: all clean fclean re tests
.DEFAULT_GOAL = all

all:
			make -C lib/my
			gcc -o infin_add infin_add.c ./test_files/main.c -L./lib/my -lmy

clean:
			rm -f *.o

fclean: 		clean
			rm -f infin_add
			make -C lib/my fclean
			cd tests && rm -f units

re: 			fclean all

tests:
			@cd tests && gcc -o units ../*.c tests.c -Wall -Wextra -lcriterion -lgcov -lmy -w
			@cd tests && ./units
