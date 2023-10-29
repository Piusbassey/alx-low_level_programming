#!/bin/bash

c_files=$(ls *.c)

for c_file in $(ls *.c); do
	gcc -c $c_file
done

ar rcs liball.a *.o

ranlib liball.a
