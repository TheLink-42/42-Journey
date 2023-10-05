# 42 Push_Swap

Given a set of integers, sort it using a predefined set of instructions using
two stacks. The instruction set is defined below. This program outputs a program
in push_swap instructions that sorts the input integers.

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

## Objective

Using the instruction set defined above, your program output should contain the sequence of instructions 
to follow to sort the stack `stack a` with the least amount of instructions possible. You may use an 
auxiliary stack `stack b` which must be empty by the end of the execution.

## Algorithm

(Still working on it :memo:)
