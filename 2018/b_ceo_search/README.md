##Problem
The CEO of Code Jam has just retired to spend more time with The Art of Computer Programming, so we need your help finding a new one!

Every Code Jam employee has an experience level that is a nonnegative integer. When we hire our new CEO, we must organize the Code Jam team as follows:

* Every employee other than the CEO must have a single direct manager who is another employee with an experience level greater than that employee's own experience level. (The CEO cannot have a direct manager).
* An employee (including the CEO) with experience level E can be a direct manager for between 0 and E other employees, inclusive. Note that if employee A is the direct manager of employee B, and B is the direct manager of C, A is not also a direct manager of C.
* Because of office politics, the new CEO cannot be one of the existing employees, no other new employees can be added, and no existing employees can be removed.

Of course, hiring a more experienced CEO is more expensive! What is the minimum possible experience level for the new CEO such that the Code Jam team can be organized according to the rules above?

###Input
The first line of the input gives the number of test cases, T. T test cases follow. Each begins with one line with an integer L: the number of different experience levels present among the existing employees. Then, L lines follow; the i-th of these contains two integers Ni and Ei, and indicates that there are Ni existing employees that have the experience level Ei.

###Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the minimum possible experience level for the new CEO, as described above.

###Limits
1 ≤ T ≤ 100.
For all i < j, Ei < Ej.

###Small dataset
1 ≤ L ≤ 10.
1 ≤ Ni ≤ 10.
The sum of all Ni ≤ 10. 0 ≤ Ei ≤ 10.

###Large dataset
1 ≤ L ≤ 1000.
1 ≤ Ni ≤ 1012.
0 ≤ Ei ≤ 1000.

###Sample
```
Input       Output 
 
2           Case #1: 4
3           Case #2: 5
2 0
2 2
1 3
1
5 0
```

In Sample Case \#1, there are five existing employees: one with an experience level of 3, two with an experience level of 2, and two with an experience level of 0. We can hire a new CEO with an experience level of 4; then, for example, we can have the new CEO directly manage the level 3 and one level 0, and have the level 3 directly manage the two level 2s and the other level 0. (Other valid arrangements are possible.) Moreover, we know that the new CEO must be at least level 4, or else there would be nobody who could directly manage the existing level 3. So 4 is both an upper and lower bound, and must be the correct answer.

In Sample Case \#2, all five of the existing employees have an experience level of 0 and cannot directly manage other employees. The new CEO must personally directly manage all of them, which requires an experience level of at least 5.