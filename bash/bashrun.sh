#!/usr/bin/bash

echo "Hello World in Bash scripting"

echo "I am in $(pwd)"

num=1

for i in {1..10}
do
  num=$((num*i))
  echo "Iteration: $i || Number: $num"
done
	 
