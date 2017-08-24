#Some variables are used with a special mean:
#$@ name of the target
#$^ list with the names of all Pre-requisite without duplicates
#$< name of the first Pre-requisite
#variables of compiling.
CC = g++
CFLAGS = -W -Wall -pedantic -ansi -O0 -g -std=c++11 -I. -I$(INC_DIR)
#variables of directories.
INC_DIR = ./include
BIN_DIR = ./bin
SRC_DIR = ./src
OBJ_DIR = ./build


FrogRace:	$(OBJ_DIR)/main.o $(OBJ_DIR)/race.o
	@echo "============="
	@echo "Conecting the target $@"
	@echo "========s====="
	$(CC) $(CFLAGS) $^ -o $(BIN_DIR)/FrogRace
	@echo "+++[executable $@ create in $(BIN_DIR)] +++"
	@echo "========s====="

$(OBJ_DIR)/main.o:	$(SRC_DIR)/main.cpp $(INC_DIR)/Frog.h
	$(CC) $(CFLAGS) -c $< -o $(OBJ_DIR)/main.o

$(OBJ_DIR)/race.o:	$(SRC_DIR)/race.cpp $(INC_DIR)/Frog.h
	$(CC) $(CFLAGS) -c $< -o $(OBJ_DIR)/race.o

clean:	
	rm -rf $(BIN_DIR)/*
	rm -rf $(OBJ_DIR)/*	