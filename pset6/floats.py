from cs50 import get_float

x = get_float("x: ")

y = get_float("y: ")

z = x / y

print(f"x / y = {z:.50f}")

'''
if you want to have an infinite amount of precision all the way out,
you need an infinite amount of memory.
And no Mac or PC or phone has an infinite amount of memory.
And so imprecision was the analog in the floating point world
to overflow, recall, where if you only have a finite number of bits
you can do really well up to a point.
But eventually, the computer's got to estimate that value for you
because you can't represent an infinite number of values.

For precision need, you need to import sth that allows you to use as much as memory
as you want more than just the default amount of memory.
'''