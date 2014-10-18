COMPILER=gcc

SRC_COMMONS=commons/src/

SRC_DAEMONISER=daemoniser/src/*
OUTPUT_DAEMONISER=daemoniser/run_daemon

SRC_APP=src/*
OUTPUT_APP=backgroundtasks

build: $(FILES)
	$(COMPILER) -o $(OUTPUT_DAEMONISER) -Wall $(SRC_DAEMONISER) -I $(SRC_COMMONS) -std=c99
	$(COMPILER) -DDAEMON_LOCATION=$(OUTPUT_DAEMONISER) -o $(OUTPUT_APP) -Wall $(SRC_APP) -I $(SRC_COMMONS) -std=c99
