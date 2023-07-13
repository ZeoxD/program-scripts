read n
read p
num=1
for((i = 0; i<p; i++))
do
	num=$((num*n))
done
echo "$n ^ $p = $num"
