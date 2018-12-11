# in python, the list is similar to linked list in C
# because it can shrink or grow aumatically

# initialize an empty list
from cs50 import get_int

numbers = []

while True:
     number = get_int("append some numbers in the list: ")

     if not number:  # error check
         break

     if number not in numbers:   # pick out rebundant numbers
         numbers.append(number)

print()  # just start a new line

for number in numbers:
    print(number)