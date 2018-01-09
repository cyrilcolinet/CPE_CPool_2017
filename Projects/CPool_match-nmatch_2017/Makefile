.PHONY: compile help clean compile tests
.DEFAULT_GOAL = help

help: ## Display help
	@grep -E '(^[a-zA-Z_-]+:.*?##.*$$)|(^##)' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[32m%-30s\033[0m %s\n", $$1, $$2}' | sed -e 's/\[32m##/[33m/'

match: match.c test_files/match_main.c ## Compile match sources
	gcc -o match match*.c test_files/match_main.c -L./lib/my -lmy -Wall

nmatch: match.c test_files/nmatch_main.c ## Compile nmatch sources
	gcc -o nmatch nmatch*.c test_files/nmatch_main.c -L./lib/my -lmy -Wall

compile: ## Compile the library with the sources hosted in git
	git clone git@git.epitech.eu:/cyril.colinet@epitech.eu/my_library ./tmp
	cd ./tmp && gcc -c *.c -Wall
	cd ./tmp && ar rc libmy.a *.o
	cd ./tmp && mv libmy.a ../lib/my/

clean: ## Clear the current directory and back to the only source
	@rm -rf match nmatch
	@rm -rf ./tmp
	@rm -rf ./lib/my/libmy.a
	@rm -rf ./tests/*_tests

install: clean compile match nmatch ## Compile with library

tests: match ## Run unitary tests
	cd ./tests && gcc -o match_tests ../match*.c match_tests.c -lcriterion -lgcov -lmy -Wall -Wextra --coverage
	cd ./tests && ./match_tests
