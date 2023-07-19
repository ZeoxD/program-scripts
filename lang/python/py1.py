def fib(n):
   if n<=1:
      return n
   else:
      return fib(n-1)+fib(n-2)


def fact(n):
   if n==0:
      return 1
   else:
      return n* fact(n-1)




def ToH(n, F , T , A):

   if n==1:
      print("move disk 1 from rod", F , "to rod",T)
      return

   ToH(n-1, F, A , T)
   print("move disk" ,n , " from rod", F , "to rod",T)
   ToH(n-1, A, T , F)

