import math

def leibniz(n_terms):
   pi_approx = 0
   for k in range(n_terms):
    pi_approx += ((-1) ** k) / (2 * k + 1)
    return pi_approx * 4
n_terms = 1
print(leibniz(n_terms))


print(math.pi)
print(4*math.atan(1))