#!/usr/bin/bash

echo "my bash script"

echo "I am in $(pwd)"

num=1

for i in {1..11}
do
  num=$((num*i))
  echo "Number: $num"
done
	 
