COMPILER=gcc

FILES=src/*
COMMONS=../commons/src/target/*
OUTPUT_DAEMONISER=../daemoniser/target/daemoniser

OUTPUT=target/launcher

build: $(FILES)
	rm  
	$(COMPILER) -D DAEMON_LOCATION=$(OUTPUT_DAEMONISER) -o $(OUTPUT) -Wall -std=c99 $(FILES)
