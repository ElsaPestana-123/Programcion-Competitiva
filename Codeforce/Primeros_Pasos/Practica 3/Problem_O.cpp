/*
O. Barcodes
time limit per test1 second
memory limit per test256 megabytes
Concurso Nacional de Computación de Cuba: 2023, Problem 1A

Sekai has thought about opening an electronic components store, and like 
every good store, he needs a cash register. He wants to start generating 
barcodes for his products but does not know what width they should have 
and whether there will be enough valid codes for all his products, since 
all of them must be different. That is why Sekai came up with the following problem:

Given m, determine how many valid barcodes of width m exist.

A barcode is a series of adjacent black or white bars of width 1 or 2, such that the total sum of their widths equals m.

For more clarity, the following are examples of barcodes 
(each bar appears with its respective width written below it).

A barcode is said to be valid when it begins with a black bar and 
ends with a black bar, and there are no two consecutive bars of 
the same color. Note that bars can have a width of 1 or 2 without 
needing to repeat any particular pattern. The following are examples 
of valid and invalid barcodes.

The barcode on the left is valid (it begins and ends with 
black bars and there are no adjacent bars of the same color).
The barcode in the middle is not valid (it has adjacent bars 
of the same color and ends with a white bar instead of a black one).
The barcode on the right is not valid (it begins with a white bar instead of a black one).

Input
The only input line contains the integer m (1≤m≤10^5) — the width of the barcode.

Output
Print a single integer — the number of valid barcodes modulo 109+7.
*/