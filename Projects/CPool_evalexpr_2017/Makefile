.PHONY: all clean fclean re tests_unit

all :
		make -C lib/my
		gcc -o eval_expr *.c main/main.c -L./lib/my -lmy

clean:
		rm -f *.o

fclean:		clean
		rm -f eval_expr
		make -C lib/my fclean
		cd test_unit && rm -f units

re:		fclean all

tests_unit:
		cd test_unit && gcc -o units ../*.c tests_unit.c -lcriterion -lgcov -lmy -Wall -Wextra
		cd test_unit && ./units
