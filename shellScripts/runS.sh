#!/bin/bash

echo "Write your file name: "

read filename
read filetype

if [ $filetype = "sh" ]
then
	chmod 777 $filename.sh
else
	echo "File not supported"
fi

#run your file
./$filename.sh


