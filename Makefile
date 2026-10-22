CXX      = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2

# Semua .cpp di folder ini dan subfolder, kecuali template.cpp
SRCS = $(patsubst ./%,%,$(shell find . -name '*.cpp' ! -name 'template.cpp'))
BINS = $(SRCS:.cpp=)

.PHONY: all clean $(SRCS)

all: $(SRCS)

# make X.cpp -> compile X.cpp jadi X
$(SRCS): %.cpp:
	$(CXX) $(CXXFLAGS) $@ -o $*

clean:
	rm -f $(BINS)
