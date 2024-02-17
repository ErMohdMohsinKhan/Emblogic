savedcmd_/root/CDD4/mycdd.mod := printf '%s\n'   initDev.o cleanup.o | awk '!x[$$0]++ { print("/root/CDD4/"$$0) }' > /root/CDD4/mycdd.mod
