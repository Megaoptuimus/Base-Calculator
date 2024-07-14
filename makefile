CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iincludes
LDFLAGS = -Llib -lsfml-graphics -lsfml-window -lsfml-system
SOURCES = src/main.cpp
HEADERS = 
TARGET = main

all: $(TARGET)

$(TARGET): $(SOURCES) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SOURCES) $(LDFLAGS) -o $(TARGET)
debug: $(TARGET)
	gdb $(TARGET)
clean:
	rm -f $(TARGET)
