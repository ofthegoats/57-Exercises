P = float(input("What is the principal amount? £"))
r = float(input("What is the rate of interest? "))/100
t = float(input("What is the number of years? "))
n = float(input("What is the number of times the interest is compounded per year? "))

print("£{} invested at {}%% for {} years compounded {} times per year is £{}".format(P, r, t, n, P*(1 + r/n)**(n*t)))