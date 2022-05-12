/*
We have the weird algorithm as follows:
  till the number becomes 1:
    if number == even:
        number = nuumber/2
    else:
        number = number*3 +1

But, by mistakely a kid typed the weird algorithm in the odd part as
    if number == odd:
        number = number*3 - 1
Now, your work is to find if any case the algorithm fails or not else the pattern.

Example: if the number is 5, then your pattern will be
    5, 14, 7, 20, 10, 5, 14, 7, 20, 10, 5.... and continue till this.

*/
