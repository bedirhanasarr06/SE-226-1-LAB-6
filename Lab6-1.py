import math
#QUESTION-1
n=int(input("Enter n: "))
x=int(input("Enter x: "))

term=lambda i: (n**i)/math.factorial(i)
terms_list=[term(i) for i in range(x+1)]
sum_terms=sum(terms_list)
e_power_n=math.exp(n)
diff=(e_power_n)-(sum_terms)
print(f"e^{n} = {sum_terms:.4f} + {diff:.4f} = {sum_terms+diff:.4f}")