COMPILER=gcc
FILES=src/*
TARGET_LOCATION=target

build: $(FILES)
	$(COMPILER) -Wall -std=c99 -c $(FILES)
	rm $(FILES).h.gch
	mv *.o $(TARGET_LOCATION)
	
clean:
	rm $(FILES).h.gch
	rm *.o
