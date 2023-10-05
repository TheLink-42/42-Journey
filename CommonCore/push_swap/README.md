# 42 Push_Swap

Given a set of integers, sort it using a predefined set of instructions using
two stacks in the least amount of instructions possible. The instruction set is 
defined below. This program outputs the set of instructions to follow to sort the
stack.


![Execution example](https://cdn.discordapp.com/attachments/800692244179845150/1159290120499892304/image.png?ex=65307c0f&is=651e070f&hm=f89fa3d4ff8aef9d9b51e58525adfd06912d69e1d6dc647cb8ff120251ed93c2& "Execution example")

## Instructions

| Code  | Instruction
| ----  | ------------------------------------------------------ |
| `sa`  | Swaps the 2 top elements in stack a                    |
| `sb`  | Swaps the 2 top elements in stack b                    |
| `ss`  | Swaps the 2 top elements in both stacks                |
| `pa`  | Moves the top element of stack b to the top of stack a |
| `pb`  | Moves the top element of stack a to the top of stack b |
| `ra`  | Shifts all elements of stack a from bottom to top      |
| `rb`  | Shifts all elements of stack b from bottom to top      |
| `rr`  | Shifts all elements of both stacks from bottom to top  |
| `rra` | Shifts all elements of stack a from top to bottom      |
| `rrb` | Shifts all elements of stack b from top to bottom      |
| `rrr` | Shifts all elements of both stacks from top to bottom  |

## Algorithm

(Still working on it :memo:)

## Tester

In order to run the tester execute this command on your push_swap directory:

`./tester/tester.sh 100`

It will execute your program (named push_swap) with 100 different sets of random numbers
and return the highest and lowest number of instructions used and the average instructions needed to sort the stack.
It will return this information for both 100 and 500 numbers. If you want to change the
amount of executions just change number 100 for any number you want.
