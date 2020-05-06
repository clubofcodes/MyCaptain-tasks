# Python program to display the Fibonacci sequence

def recur_fibo(n):
   if n <= 1:
       return n
   else:
       return(recur_fibo(n-1) + recur_fibo(n-2))

#As per the user input
nterms = int(input("Enter the no. of terms:"))
#print("\n")

# check if the number of terms is valid
if nterms <= 0:
   print("Plese enter a positive integer")
else:
   print("\nFibonacci sequence till",nterms,"terms is:")
   for i in range(nterms):
       print(recur_fibo(i))
