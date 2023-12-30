#! /bin/bash
$(make clean)
if (make)
then
        echo "Code build successfully"
        echo "To execute the code, type -> InfixPrefixPostfix"
else
        "ERROR : Code build failed"
read
fi
