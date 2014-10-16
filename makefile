COMPILER = gcc
FILES = src/*
OUTPUT_FILE = app

build: $(FILES)
	$(COMPILER) -o $(OUTPUT_FILE) -Wall $(FILES)
