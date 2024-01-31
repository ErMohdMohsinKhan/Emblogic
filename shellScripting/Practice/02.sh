#! /bin/bash
#Use of while loop

var=4
while [ $var -gt 0 ]
do
        echo $var
        var=$[ $var-1 ]
done
