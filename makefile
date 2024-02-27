CXX = g++
CFLAGS = -Wall -g 
LIBS =
TARGET = src/energy_calculator.cpp src/genList.cpp src/generator.cpp
MAIN = energy_calculator

all: energy_calculator

$(MAIN):
	$(CXX) $(TARGET) $(CFLAGS) $(LIBS) -o $(MAIN)

clean:
	$(RM) energy_calculator.o genList.o generator.o