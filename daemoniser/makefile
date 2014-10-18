COMPILER=gcc

FOLDER=src
FILES=src/*
COMMONS_ORIGINAL=../commons/src
COMMONS_TARGET=src/commons/

OUTPUT=target/daemoniser

build: $(FOLDER) 
	rm -rf $(COMMONS_TARGET)
	mkdir $(COMMONS_TARGET)
	cp $(COMMONS_ORIGINAL)/* $(COMMONS_TARGET)
	$(COMPILER) -o $(OUTPUT) -Wall -std=c99 $(COMMONS_TARGET)*.c $(FILES).c
	rm -rf $(COMMONS_TARGET)
