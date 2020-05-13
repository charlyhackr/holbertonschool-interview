#!/usr/bin/python3
import math
"""

   Solution: boils down to find the prime factors and return their sum
"""


def sum_prime_factors(n):
    res = 0

    if n <= 1:
        return res
    for i in range(2, int(math.sqrt(n) + 1)):
        while n % i == 0:
            n = n // i
            res += i
    if n >= 2:  # case where n is prime
        res += n
    return res


def minOperations(n):
    return sum_prime_factors(n)
