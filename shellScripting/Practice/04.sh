#! /bin/bash
#Use of Select loop

PS3="Please enter your choice number : "

select i in Red Green Yellow Blue
do
        echo "You have selected $i colour"
        break
done
