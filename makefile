CXX = gcc
CFLAGS = -Wall -g 
LIBS = -lstdc++
TARGET = src/energy_calculator.cpp src/genList.cpp src/generator.cpp src/combs.cpp
MAIN = energy_calculator

all: energy_calculator

$(MAIN):
	$(CXX) $(TARGET) $(CFLAGS) $(LIBS) -o $(MAIN)

clean:
	$(RM) energy_calculator.o genList.o generator.o