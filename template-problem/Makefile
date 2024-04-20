CXX = g++
path_bits_stdc++=/usr/include/x86_64-linux-gnu/c++/11/bits/stdc++.h
CXXFLAGS = -Wall -Wextra -std=c++17 $(path_bits_stdc++)

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = run

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
