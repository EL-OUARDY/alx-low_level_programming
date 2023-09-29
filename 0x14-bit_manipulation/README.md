# Bit manipulation — Alx Low Level Programming
0x14. C - Bit manipulation

## Definition

Bit manipulation is a fundamental concept in computer science and programming. It involves working with individual bits within a binary representation of data

## Basics of Bit Manipulation
`Bit:` The smallest unit of data in a computer, which can be either 0 or 1. \
`Binary Representation:` Data is stored as sequences of bits, allowing us to represent numbers, characters, and more.
Common Bit Operations.

## Common Bit Operations
#### 1. Bitwise AND (&)
Sets a bit to 1 if both corresponding bits are 1.
```c
# Binary representation of 5: 0101
# Binary representation of 3: 0011
result = 5 & 3  # Bitwise AND
# Result (binary): 0001
# Result (decimal): 1
```
#### 2. Bitwise OR (|)
Sets a bit to 1 if at least one of the corresponding bits is 1.
```c
# Binary representation of 5: 0101
# Binary representation of 3: 0011
result = 5 | 3  # Bitwise OR
# Result (binary): 0111
# Result (decimal): 7
```
#### 3. Bitwise XOR (^)
Sets a bit to 1 if exactly one of the corresponding bits is 1.
```c
# Binary representation of 5: 0101
# Binary representation of 3: 0011
result = 5 ^ 3  # Bitwise XOR
# Result (binary): 0110
# Result (decimal): 6
```
#### 4. Bitwise NOT (~)
Flips the bits, changing 0 to 1 and 1 to 0.
```c
# Binary representation of 5: 0101
result = ~5  # Bitwise NOT
# Result (binary): 1010 (Note: The number of bits depends on the platform)
# Result (decimal): -6 (Two's complement representation)
```
#### 5. Left Shift (<<)
Shifts bits to the left, filling in with zeros.
```c
# Binary representation of 5: 0101
result = 5 << 2  # Left shift by 2 positions
# Result (binary): 010100
# Result (decimal): 20
```
#### 6. Right Shift (>>)
Shifts bits to the right, filling in with zeros or the sign bit.
```c
# Binary representation of -8 (assuming 8-bit representation): 11111000
result = -8 >> 2  # Right shift by 2 positions
# Result (binary): 11111110 (Sign extension for negative numbers)
# Result (decimal): -2
```

## Practical Uses of Bit Manipulation
**Flags and Masks:** Used to store multiple Boolean values efficiently using a single variable.

**Bitwise Operations on Colors:** In graphics programming, colors are often represented as combinations of red, green, and blue components using bit manipulation.

**Bitwise XOR for Swapping:** A clever way to swap two variables without using a temporary variable.

**Bit Manipulation in Algorithms:** It's essential in algorithms like counting set bits (Hamming weight), finding the single non-duplicate element, and more.

**Bitwise Operations in Networking:** Used in networking protocols to set and check specific flags.

**Optimizing Memory:** Reduces memory usage by packing multiple values into a single variable.

## Conclusion
Bit manipulation is a powerful tool that can significantly optimize code and solve specific problems efficiently. understanding bit manipulation can be valuable in optimizing algorithms and data processing. Good luck 👋

**Twitter:** https://twitter.com/_ELOUARDY \
**Email:** ouadia@elouardy.com

> I Love .md Files!!
