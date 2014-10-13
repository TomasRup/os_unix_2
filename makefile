COMPILER = gcc
FILES = src/*.c
OUTPUT_FILE = app

build: $(FILES)
	$(COMPILER) -o $(OUTPUT_FILE) -Wall $(FILES)
