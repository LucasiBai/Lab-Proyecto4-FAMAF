PROGRAMS_DIR=apps/
SOURCE_DIR=src/
OBJ_DIR=$(SOURCE_DIR)libs/

CC=gcc
FLAGS= -Wall -Wextra -Wpedantic -std=c99
DEBUG= -g
OBJ= utils.o
TARGET=ejercicio01 

.PHONY= clean

compile: create_programs_dir $(TARGET)
	@echo "All Compiled! Happy Hacking"

create_programs_dir:
	@mkdir -p $(PROGRAMS_DIR)

$(TARGET): $(OBJ_DIR)$(OBJ) 
	@$(CC) $(FLAGS) $(SOURCE_DIR)$@.c -o $(PROGRAMS_DIR)$@ $(OBJ_DIR)$(OBJ)
	@echo "$@ Compiled!"

$(OBJ_DIR)$(OBJ): %.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "Compiled $@ from $<"

clean:
	@rm -rf $(OBJ_DIR)*.o $(PROGRAMS_DIR)
	@echo "All Clean!"