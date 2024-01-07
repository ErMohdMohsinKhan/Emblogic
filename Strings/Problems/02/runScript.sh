#! /bin/bash

`make clean`

if (make)
then
	echo "Code is build successfully"
	echo "To execute the code, type -> ./P2"
else
	echo "ERROR : Code build failed"
read
fi
