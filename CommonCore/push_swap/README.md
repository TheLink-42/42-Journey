# 42 Push_Swap

Given a set of integers, sort it using a predefined set of instructions using
two stacks in the least amount of instructions possible. The instruction set is 
defined below. This program outputs the set of instructions to follow to sort the
stack.


Ex: 

`./push_swap "2 1 3"
sa`

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
