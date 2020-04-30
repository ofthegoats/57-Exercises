import requests

rate = requests.get("https://api.exchangeratesapi.io/latest").json()["rates"]["GBP"]

nEUR = float(input("How many euros are you exchanging? €"))
print("€{} at an exchange rate of {} is £{}.".format(nEUR, rate, nEUR * rate))