.PHONY: help clean
.DEFAULT_GOAL = libmy.a

help: ## Display help
	@grep -E '(^[a-zA-Z_-]+:.*?##.*$$)|(^##)' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[32m%-30s\033[0m %s\n", $$1, $$2}' | sed -e 's/\[32m##/[33m/'

libmy.a: ## Compile the library
	gcc -c *.c
	ar rc libmy.a *.o
	cp libmy.a ../
	cp my.h ../../include/

clean: ## Clean the directory
	rm -rf *.o

fclean: clean ## Clean the compiled content
	rm -f libmy.a
	rm -f ../libmy.a
	rm -f ../../include/my.h
