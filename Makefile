CXXFLAGS = -Wall

all: assigntables

assigntables:Restaurant.o Table.o assigntables.o
	$(CXX) -o $@ $^

clean:
	rm -f assigntables *.o