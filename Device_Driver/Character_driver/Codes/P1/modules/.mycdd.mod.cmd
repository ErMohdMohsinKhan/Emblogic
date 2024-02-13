savedcmd_/root/CDD/mycdd.mod := printf '%s\n'   initDev.o cleanup.o | awk '!x[$$0]++ { print("/root/CDD/"$$0) }' > /root/CDD/mycdd.mod
