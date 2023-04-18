import math
#QUESTION-2
def recursive_total(n):
    global total

    if n==0:
        return
    else:
        current_total=0

        for k in range(1,n+1):
            current_total+=((-1)**(k+1))/k

        total+=current_total
        recursive_total(n-1)

total=0
n=int(input("Enter n: "))
recursive_total(n)
print(f"Total: {total:.4f} \n")