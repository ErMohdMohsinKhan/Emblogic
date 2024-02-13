savedcmd_/root/CDD3/mycdd.mod := printf '%s\n'   initDev.o cleanup.o | awk '!x[$$0]++ { print("/root/CDD3/"$$0) }' > /root/CDD3/mycdd.mod
