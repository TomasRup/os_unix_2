COMPILER=gcc
FOLDER=src
FILES=src/*

build: $(FILES)
	$(COMPILER) -Wall -std=c99 -c $(FILES)
	rm -f $(FILES).h.gch
	rm -f *.o
	
clean:
	rm -f $(FILES).h.gch
	rm -f *.o
