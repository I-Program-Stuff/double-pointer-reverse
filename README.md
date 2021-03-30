# double-pointer-reverse
Algorithm for reversing strings in C.
This is an algorithm that takes a string and outputs the reversed form of the string.

# How it works?
This algorithm uses two pointers; one at the beginning of the string and one at the end.

If the string has an odd amount of characters the string at the end will move backwards until it reaches the middle of the string.
The pointer at the beginning of the string will move foward until reaching the middle.
As the pointers move it replaces the character at the first pointer with the character at the second pointer and vice versa.

If the string has an even amount of characters the the first pointer will move until it reaches a character greater than half the string.
The second pointer will move until it reaches a character less than half of the string.
As the pointers move it replaces the character at the first pointer with the character at the second pointer and vice versa.
