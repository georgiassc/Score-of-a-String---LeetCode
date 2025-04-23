# Score of a String - LeetCode

## Problem Statement

You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.

Return the score of s.

### Example:

```text
Input: s = "hello"

Output: 13

Explanation:

The ASCII values of the characters in s are: 'h' = 104, 'e' = 101, 'l' = 108, 'o' = 111. So, the score of s would be |104 - 101| + |101 - 108| + |108 - 108| + |108 - 111| = 3 + 7 + 0 + 3 = 13.
```

## Solution Overview

To solve the given problem, we'll iterate through the string s from the beginning. For each character at index i, we compute the difference between the ASCII values of the character at index i and the character at index i + 1. 

## Code

```c
int scoreOfString(char* s) 
{
    int i = 0;
    int v = 0;
    while(s[i])
    {
        if(s[i] && s[i+1])
        {
            if(s[i] >= s[i+1])
                v += s[i] - s[i+1];
            else
                v += s[i+1] - s[i];
        }
        i++;
    }
    return v;
}
```
