# Password Strength Indicator

Create a program that determines the complexity of a given password based off
these rules:

* A very weak password contains *only* numbers, letters *or* special characters,
    and is less than 8 characters.
* A weak password contains *any combination of* numbers, letters, and/or special
    characters, but is less than 8 characters.
* A strong password contains *only* numbers, letters or special characters, and
    is more than 8 characters.
* A strong password contains *all of* numbers, letters and special characters,
    and is more than 8 characters.

## Note

This does not cover all cases, for example with a password that is both numbers
and digits but also very short. Different rules have therefore been chosen than
those in the book.

## Other note

Please do not use this to actually check how strong a password is, because it's
a really bad measure. Look into password entropy, which [xkcd](https://xkcd.com/936/)
describes to some extent, and use a tool like [this](https://howsecureismypassword.net/)
to check actual password security.

There is no password that can't be cracked, it's just a question of how long it
takes to crack it. Though that amount of time could be longer than until the
heat death of the universe. *That's* a strong password.
