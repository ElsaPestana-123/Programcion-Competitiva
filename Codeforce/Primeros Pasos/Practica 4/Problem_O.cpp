/*
O. Electric Bill
time limit per test1 second
memory limit per test256 megabytes

It is the year 2100. Electricity has become very expensive. 
Recently, your electricity company raised the power rates once more.
The table below shows the new rates (consumption is always a positive integer):

Range (Crazy-Watt-hour)	  Price (coins)
1−100                          2
101−10000                      3
10001−1000000                  5
≥1000001                       7

This means that, when calculating the amount to pay, 
the first 100 CWh have a price of 2 coins each; 
the next 9900 CWh (between 101 and 10000) 
have a price of 3 coins each, and so on.

For instance, if you consume 10123 CWh, you will 
have to pay: 2×100+3×9900+5×123=30515 coins

The evil mathematicians from the company have found a way to gain even more money. 
Instead of telling you how much energy you have consumed and 
how much you have to pay, they will show you two numbers:

A: the total amount to pay if your consumption and your neighbor's consumption were billed together
B: the absolute value of the difference between your bill and your neighbor's bill

If you can't figure out how much you have to pay, you must pay another 
100 coins for such a "service". You are very economical, and therefore 
you are sure you cannot possibly consume more than any of your neighbors. 
So, being smart, you know you can compute how much you have to pay.

For example, suppose the company informed you of the following two numbers: A=1100 and B=300. 
Then you and your neighbor's consumptions had to be 150 CWh and 250
CWh respectively. The total consumption is 400 CWh, and then A is: 2×100+3×300=1100 
You have to pay: 2×100+3×50=350 coins while your neighbor must pay: 2×100+3×150=650 coinsso B is: |350−650|=300.

Not willing to pay the additional fee, you decided to write a 
computer program to find out how much you have to pay.

Input
The only line of input contains two integers A and B separated by a single space (1≤A,B≤10^9).

You may assume there is always a unique solution; that is, there exists exactly 
one pair of consumptions that produces those numbers.

Output
Print a single integer — the amount you have to pay (in coins).
*/