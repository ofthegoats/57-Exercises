# Karvonen Heart Rate

Write a program that takes age and resting heart rate, to make a table of
intensity to heart rate. The formula is

$$ TargetHeartRAte = (((220 - age) - restingHR) \times intensity) + restingHR $$

**EXAMPLE:**

```plaintext
Resting pulse: 65
Age: 22

Intensity      | Rate
---------------|------
55%            | 138 bpm
60%            | 145 bpm
65%            | 151 bpm
..             | ..
90%            | 185bpm
95%            | 191bpm
```
