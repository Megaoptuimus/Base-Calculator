CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iincludes
SOURCES = src/main.cpp
HEADERS = 
TARGET = main

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)
debug: $(TARGET)
	gdb $(TARGET)
clean:
	rm -f $(TARGET)
