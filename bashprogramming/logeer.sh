#! /bin/bash

cp a.txt . || logger -i -s -t $0 -p local0.info "invalid cp arguments" 
#cp command argument are not correct, so it will generate log msgs
#check log at /var/log/syslog file