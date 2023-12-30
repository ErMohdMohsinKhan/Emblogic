#! /bin/bash
$(make clean)
if (make)
then
	echo "Code build successfully"
	echo "To execute the code, type -> string_Reversal"
else
	"ERROR : Code build failed"
read
fi
