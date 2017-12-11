#Project name
PROJ =	playIT 

#Compiler
$(CXX) = g++

#Source files
SRC = main.cpp
SRC += SewerWorld.cpp 
SRC += Space.cpp
SRC += Character.cpp
SRC += SewerEntrance.cpp
SRC += SewerMain.cpp
SRC += DeepSewer.cpp
SRC += SewerTunnel_1.cpp
SRC += SewerTunnel_2.cpp
SRC += SewerTunnel_3.cpp
SRC += SewerTunnel_4.cpp
SRC += SewerTunnel_5.cpp
SRC += LoserGang1.cpp
SRC += LoserGang2.cpp
SRC += LoserGang3.cpp
SRC += LoserGang4.cpp
SRC += LoserGang5.cpp
SRC += PennywiseLair.cpp
SRC += GameFunctions.cpp

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
	zip Laxsont_FinalProject.zip *.cpp *.hpp *.pdf Makefile
	

clean:	$(CLEAN)
	@echo "RM	*.o"
	@echo "RM	$(BIN)"
	@rm -f @.o $(BIN)
