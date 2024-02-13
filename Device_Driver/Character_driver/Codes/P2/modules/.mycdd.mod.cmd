savedcmd_/root/CDD2/mycdd.mod := printf '%s\n'   initDev.o cleanup.o | awk '!x[$$0]++ { print("/root/CDD2/"$$0) }' > /root/CDD2/mycdd.mod
