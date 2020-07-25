# Months to Pay Off a Credit Card

Write a program that will determine how many months it will take to pay off a
credit card balance. The program should ask the user to enter the balance of a
credit card and the APR of the card. The program should then return the number
of months needed.

The formula to use is

$$ n = -\frac{1}{30} \times \frac
{\log\left(1 + \frac{b}{p}\left(1 - \left(1 + i\right)^30\right)\right)}
{\log\left(1 + i\right)} $$

Where:

* $n$ is the number of months
* $i$ is the daily rate (APR divided by 365)
* $b$ is the balance.
* $p$ is the monthly payment

**EXAMPLE:**

```plaintext
What is your balance? 5000
What is the APR on the card (as a percent)? 12
What is the montly payment you can make? 100

It will take you 70 months to pay off this card.
```
