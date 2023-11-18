# 42 Ft_printf

## MANDATORY

Recreate the function `printf` for the following conversions:

*	`%c`: Writes on stdin a given char.
*	`%i`: Writes on stdin a given int.
*	`%d`: Writes on stdin a given int.
*	`%u`: Writes on stdin a given unsigned int.
*	`%s`: Writes on stdin a given string (char *).
*	`%x`: Writes on stdin a given unsigned number in hexadecimal value, with lower case letters.
*	`%X`: Writes on stdin a given unsigned number in hexadecimal value, with upper case letters.
*	`%p`: Writes on stdin a given memory address.
*	`%%`: Writes on stdin the char '%'.


## BONUS

Make your ft_printf compile with any combination of the following flags:

*	`n (n = any number)`: The value is to be right adjusted to the field boundary for a minimum of n spaces.
*	`-`: The converted value is to be left adjusted on the field boundary. A `-` overrides a `0` if both are given.
*	`0`: The value should be zero padded. If the `0` and `-` flags both appear, the `0` flag is ignored.
*	`.`: The minimum number of digits to appear for `d`, `i`, `u`, `o`, `x`, and `X` conversions when followed by a decimal digit string. If it is given as just `.` the precision is taken to be zero.
*	`#`: For `o` conversions, the first character of the output string is made zero. For `x` and `X` conversions, a nonzero result has the string "0x".
*	`+`: A sign (+ or -) should always be placed before a number produced by a signed conversion.
*	`' '`: A blank should be left before a positive number (or empty string) produced by a signed conversion.
