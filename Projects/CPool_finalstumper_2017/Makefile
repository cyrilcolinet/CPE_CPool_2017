.PHONY: all clean fclean re tests
.DEFAULT_GOAL = all

all: library
	gcc -o rush3 *.c ./rush_files/*.c -L./lib/my -lmy

rushs: rush1 rush2 rush3 rush4 rush5

rush1:
	cd rush_files/bkp && gcc -o rush1-1 rush_first.c ../../rush_main/rush1_main.c -L../../lib/ -lmy

rush2:
	cd rush_files/bkp && gcc -o rush1-2 rush_second.c ../../rush_main/rush2_main.c -L../../lib/ -lmy

rush3:
	cd rush_files/bkp && gcc -o rush1-3 rush_third.c ../../rush_main/rush3_main.c -L../../lib/ -lmy

rush4:
	cd rush_files/bkp && gcc -o rush1-4 rush_fourth.c ../../rush_main/rush4_main.c -L../../lib/ -lmy

rush5:
	cd rush_files/bkp && gcc -o rush1-5 rush_five.c ../../rush_main/rush5_main.c -L../../lib/ -lmy

library:
	make -C lib/my

clean:
	rm -f *.o
	rm -f *.out

fclean: clean
	rm -f rush3
	cd rush_files/bkp && rm -f rush1-*
	make -C lib/my fclean
	cd tests && rm -f unitary_tests

re: fclean all

tests: library
	cd tests && gcc -o unitary_tests ../*.c unit.c -Wall -Wextra -lcriterion -lgcov -lmy
	cd tests && ./unitary_tests
