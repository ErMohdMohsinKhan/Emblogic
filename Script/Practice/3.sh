#! /bin/bash
#To change extensions from *.txt to *.cpp

for file in *.txt
do
	leftname=$(basename $file .txt) #Stores the left part of the filename
	mv $file ${leftname}.cpp
done
