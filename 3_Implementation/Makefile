# Name of the project
PROJECT_NAME = Calculator

# Output directory
BUILD = build

# All source code files
SRC = project_main.c\
src/Calculator.c\
src/physics.c\
src/Arithmetic.c\
src/Combinatorics.c\
src/Profitloss.c\
src/mensuration.c\
src/math_functions.c\
src/financial_Calculation.c\
src/Trigonometry.c\
src/Matrix.c\
unity/unity.c

TEST_SRC = src/Calculator.c\
src/physics.c\
src/Arithmetic.c\
src/Combinatorics.c\
src/Profitloss.c\
src/mensuration.c\
src/math_functions.c\
src/financial_Calculation.c\
src/Trigonometry.c\
src/Matrix.c\
test/test_main.c\
unity/unity.c

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
INCLUDE_LIBS =

# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out -lm

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
#doc:
#	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lm
	./$(TEST_OUTPUT)

coverageCheck:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)
	
	
memcheck: $(PROJECT_NAME).out
	valgrind ./$(PROJECT_NAME).out

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
