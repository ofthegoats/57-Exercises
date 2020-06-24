# Blood alcohol calculator

Create a program that asks for your weight, sex, amount of alcohol consumed, and
the amount of time since your last drink, to calculate your BAC. Use the formula
$ BAC = (A \times 5.14/W \times r) - 0.015 \times H$ where

* $A$ is the total alcohol consumed, in ounces (oz).
* $W$ is the body weight in pounds.
* $r$ is the alcohol distribution ratio:
  * $0.73$ for men
  * $0.66$ for women
* $H$ is the number of hours since the last drink

Display whether it's legal or not to drive by comparing the BAC to 0.08.

**EXAMPLE:**

```plaintext
Your BAC is 0.08
It is not legal for you to drive.
```
