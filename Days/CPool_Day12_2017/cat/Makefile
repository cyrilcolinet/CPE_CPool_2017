.PHONY: all clean fclean re
.DEFAULT_GOAL = all

all:
			make -C ../lib/my fclean
			make -C ../lib/my
			gcc -o cat *.c -L../lib/my -lmy

clean:
			rm -f *.o

fclean: 		clean
			rm -f cat

re: 			fclean all
