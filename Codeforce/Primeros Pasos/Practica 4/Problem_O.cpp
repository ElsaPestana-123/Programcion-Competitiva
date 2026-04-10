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
#include <bits/stdc++.h>
using namespace std;

long long dineroConsumo(long long monedas){

    if(monedas <= 200){

        return monedas /2;

    } else if (monedas <= 29900){

        return 100 +(monedas -200) /3;

    } else if (monedas <= 4979900){

        return 10000 + (monedas - 29900) / 5;

    } else {

        return 1000000 + (monedas - 4979900) / 7;
    }
}

long long consumo( long long energia){

    if(energia <= 100){
        return energia * 2;

    } else if (energia <= 10000){

        return 200 + (energia - 100) * 3;

    } else if(energia <= 1000000){

        return 29900 + (energia - 10000) * 5;

    } else {

        return 4979900 + (energia - 1000000) * 7;
    }
}

int main(){

    long long A, B;
    cin >> A >> B;

    long long total = dineroConsumo(A);

    long long inicio = 0, fin = total / 2;
    long long precioTotal = 0;

    while( inicio <= fin){
        long long med = inicio + (fin - inicio)/2;

        long long deducion = total - med;
        long long mi_factura = consumo(med);
        long long factura_vecino = consumo(deducion);

        long long diferencia = factura_vecino - mi_factura;

        if(diferencia == B){
            cout<< mi_factura << endl;
            return 0;
        } else if (diferencia > B){
            inicio = med +1;
        } else if (diferencia < B){
            fin = med -1;
        }
    }

    cout << 0 << "\n";

    return 0;
}