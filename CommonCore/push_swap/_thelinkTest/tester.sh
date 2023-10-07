#!/bin/bash

source ./_thelinkTest/colors.sh

make all

loops=$1

max_result_100=0
max_result_500=0
min_result_100=999999
min_result_500=999999
total_result_100=0
total_result_500=0

logHeader "-----------------------------------\n"
logHeader "\n"
logHeader "     Size: 100    Loops: $loops     \n"
logHeader "\n"
logHeader "-----------------------------------\n"
log "\n"

for ((i = 0; i < $loops; i++)); do
	numbers=$(ruby -e "puts (00..99).to_a.shuffle.join(' ')")
    numbers_string="${numbers[*]}"

    result=$(./push_swap "$numbers_string" | wc -l)

    if [ $result -gt $max_result_100 ]; then
        max_result_100=$result
    fi

    if [ $result -lt $min_result_100 ]; then
        min_result_100=$result
    fi

    total_result_100=$((total_result_100 + result))
done

average_result=$((total_result_100 / $loops))

log "Max value: "
if [ $max_result_100 -gt 700 ]; then
    logError "$max_result_100\n"
else
    logCorrect "$max_result_100\n"
fi

log "Min value: "
if [ $min_result_100 -gt 700 ]; then
    logError "$min_result_100\n"
else
    logCorrect "$min_result_100\n"
fi

log "Average: "
if [ $average_result -gt 700 ]; then
    logError "$average_result\n"
else
    logCorrect "$average_result\n"
fi

log "Grade: "
if [ $max_result_100 -gt 1500 ]; then
    logError "0/5\n"
elif [ $max_result_100 -gt 1300 ]; then
    logCorrect "1/5\n"
elif [ $max_result_100 -gt 1100 ]; then
    logCorrect_100 "2/5\n"
elif [ $max_result_100 -gt 900 ]; then
    logCorrect "3/5\n"
elif [ $max_result_100 -gt 700 ]; then
    logCorrect "4/5\n"
else
    logCorrect "5/5\n"
fi

log "\n\n"

logHeader "-----------------------------------\n"
logHeader "\n"
logHeader "     Size: 500    Loops: $loops     \n"
logHeader "\n"
logHeader "-----------------------------------\n"
log "\n"

for ((i = 0; i < $loops; i++)); do
	numbers=$(ruby -e "puts (00..499).to_a.shuffle.join(' ')")
    numbers_string="${numbers[*]}"

    result=$(./push_swap "$numbers_string" | wc -l)

    if [ $result -gt $max_result_500 ]; then
        max_result_500=$result
    fi

    if [ $result -lt $min_result_500 ]; then
        min_result_500=$result
    fi

    total_result_500=$((total_result_500 + result))
done

average_result=$((total_result_500 / $loops))

log "Max value: "
if [ $max_result_500 -gt 5500 ]; then
    logError "$max_result_500\n"
else
    logCorrect "$max_result_500\n"
fi

log "Min value: "
if [ $min_result_500 -gt 5500 ]; then
    logError "$min_result_500\n"
else
    logCorrect "$min_result_500\n"
fi

log "Average: "
if [ $average_result -gt 5500 ]; then
    logError "$average_result\n"
else
    logCorrect "$average_result\n"
fi

log "Grade: "
if [ $max_result_500 -gt 11500 ]; then
    logError "0/5\n"
elif [ $max_result_500 -gt 10000 ]; then
    logCorrect "1/5\n"
elif [ $max_result_500 -gt 8500 ]; then
    logCorrect "2/5\n"
elif [ $max_result_500 -gt 7000 ]; then
    logCorrect "3/5\n"
elif [ $max_result_500 -gt 5500 ]; then
    logCorrect "4/5\n"
else
    logCorrect "5/5\n"
fi

log "\n\n"

