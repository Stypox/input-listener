# It is mandatory to set EVENT_NOTIFIER_PATH to the event-notifier root directory
# Do it this way: `make EVENT_NOTIFIER_PATH=`
# For example `make EVENT_NOTIFIER_PATH=C://opengl/event-notifier`

ifeq ($(EVENT_NOTIFIER_PATH),)
 $(warning Using default event-notifier path `./`. Ignore this if cleaning. Look at first five lines in Makefile to solve.)
endif

SRC = src/
INC = include/

CXX = g++
CXXFLAGS := -Wall -std=c++17 -I$(EVENT_NOTIFIER_PATH)/include

OBJECT_FILES = $(SRC)key_input.o $(SRC)mousemove_input.o $(SRC)scroll_input.o

input_listener.o: $(OBJECT_FILES)
	ld -r $(OBJECT_FILES) -o input_listener.o

#src
$(SRC)key_input.o: $(INC)stypox/key_input.hpp $(SRC)key_input.cpp $(INC)stypox/key_event.hpp
	$(CXX) $(CXXFLAGS) -c $(SRC)key_input.cpp -o $(SRC)key_input.o
$(SRC)mousemove_input.o: $(INC)stypox/mousemove_input.hpp $(SRC)mousemove_input.cpp $(INC)stypox/mousemove_event.hpp
	$(CXX) $(CXXFLAGS) -c $(SRC)mousemove_input.cpp -o $(SRC)mousemove_input.o
$(SRC)scroll_input.o: $(INC)stypox/scroll_input.hpp $(SRC)scroll_input.cpp $(INC)stypox/scroll_event.hpp
	$(CXX) $(CXXFLAGS) -c $(SRC)scroll_input.cpp -o $(SRC)scroll_input.o

clean:
	rm $(OBJECT_FILES) input_listener.o
