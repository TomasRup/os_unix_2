COMPILER = gcc
FILES = src/*
OUTPUT_FILE = backgroundtasks

build: $(FILES)
	$(COMPILER) -o $(OUTPUT_FILE) -Wall $(FILES) -std=c99
