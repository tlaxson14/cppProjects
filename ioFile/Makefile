#Project name
PROJ = letter

#Compiler
$(CXX) = g++

#Source files
SRC = main.cpp
SRC  += output_Letters.cpp
SRC += count_Letters.cpp

#Create object for each source file
OBJ = $(SRC:.cpp = .o)

#Output binary
BIN = $(PROJ).bin

#Compiler flags
CFLAGS = -Wall -pedantic -std=gnu++11

.PHONY: default debug clean zip

default: clean $(BIN) debug

$(BIN): $(OBJ)
	@echo "CC	$@"
	@$(CXX) $(CFLAGS) $^ -o $@

%.o: %.cpp
	@echo "CC	$^"
	@$(CXX) $(CFLAGS) -c $^

zip: 
	zip $(PROJ).zip *.cpp *.hpp Makefile


clean:	$(CLEAN)
	@echo "RM	*.o"
	@echo "RM	$(BIN)"
	@rm -f @.o $(BIN)
