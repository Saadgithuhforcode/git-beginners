def e_approximation(x, terms):

    approximation = 0.0
    factorial = 1

    for n in range(terms):

        # if its 1 or more the factorial is multiplied by current
        if n > 0:
            factorial *= n

        approximation += (x ** n) / factorial

    return approximation

exp = float(input("What is the exponent? "))

result = e_approximation(exp, terms = 12)

print(result)