DIR_COMMONS=commons/
DIR_DAEMONISER=daemoniser/
DIR_LAUNCHER=launcher/

TARGET_LAUNCHER=launcher/target/launcher
TARGET_APP_NAME=backgroundtasks

build:
	rm -f $(TARGET_APP_NAME)
	(cd $(DIR_COMMONS); $(MAKE))
	(cd $(DIR_DAEMONISER); $(MAKE))
	(cd $(DIR_LAUNCHER); $(MAKE))
	cp $(TARGET_LAUNCHER) $(TARGET_APP_NAME)	
	cat /dev/null > /var/log/backgroundtasks/info.log
