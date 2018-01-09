.PHONY: help clean
.DEFAULT_GOAL = do_op

help: ## Display help
	@grep -E '(^[a-zA-Z_-]+:.*?##.*$$)|(^##)' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[32m%-30s\033[0m %s\n", $$1, $$2}' | sed -e 's/\[32m##/[33m/'

do_op: do_op.c test_files/do_op_main.c ## Compile do_op sources
	gcc -o do_op *.c test_files/do_op_main.c -L../lib -lmy -Wall

clean: ## Clear the current directory and back to the only source
	@rm -rf do_op
	@rm -rf ./tests/*_tests

tests: match ## Run unitary tests
	cd ./tests && gcc -o do_op_tests ../*.c do_op_tests.c -lcriterion -L../lib/ -lmy -Wall
	cd ./tests && ./do_op_tests
