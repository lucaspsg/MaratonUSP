## F - Square Filling CodeForces - 1207B ##

You are given two matrices A and B. Each matrix contains exactly n rows and m columns. Each element of A is either 00 or 11; each element of B is initially 0.

You may perform some operations with matrix B. During each operation, you choose any submatrix of B having size 2 x 2, and replace every element in the chosen submatrix with 1. In other words, you choose two integers x and y such that 1≤x<n and 1≤y<m, and then set Bx,y, setBx+1,y set Bx,y+1 and setBx+1,y+1 to 1

Your goal is to make matrix B equal to matrix A. Two matrices A and B are equal if and only if every element of matrix A is equal to the corresponding element of matrix B.

Is it possible to make these matrices equal? If it is, you have to come up with a sequence of operations that makes B equal to A. Note that you don't have to minimize the number of operations.



## Input ##

    The first line contains two integers n and m (2≤n,m≤50).

    Then n lines follow, each containing m integers. The j-th integer in the i-th line is Aij. Each integer is either 0 or 1.



## Output ##

    If it is impossible to make B equal to A, print one integer -1.

    Otherwise, print any sequence of operations that transforms B into A in the following format: the first line should contain one integer k — the number of operations, and then k lines should follow, each line containing two integers x and y for the corresponding operation ( set Bx,y, setBx+1,y set Bx,y+1 and setBx+1,y+1 to 1 ). The condition 0≤k≤2500 should hold.



