CXX ?= g++
CXXFLAGS ?= -O2 -std=c++17 -Wall -Wextra -Wpedantic

.PHONY: all clean test
all: rcci_model

rcci_model: rcci_model.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

test: rcci_model
	python3 test_model.py

clean:
	rm -f rcci_model
