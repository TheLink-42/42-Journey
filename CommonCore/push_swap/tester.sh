#!/bin/bash

loops=1000
size=100
max_grade=701

below=0
max_result=0
min_result=999999
total_result=0

for ((i = 0; i < $loops; i++)); do
	numbers=($(shuf -i 1-$size -n $size | tr '\n' ' '))
	numbers_string="${numbers[*]}"

	result=$(./push_swap "$numbers_string" | wc -l)

	if ((result > max_result)); then
		max_result=$result
	fi

	if ((result < min_result)); then
		min_result=$result
	fi

	if ((result < max_grade)); then
		below=$below+1
	fi

	total_result=$((total_result + result))
done

average_result=$((total_result / $loops))
percentage=$((below / ($size / 10)))

echo "Valor maximo: $max_result"
echo "Valor mínimo: $min_result"
echo "Valor medio: $average_result"
echo "Porcentaje de aprobado: $percentage"
