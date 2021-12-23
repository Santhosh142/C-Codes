/*

//Problem 1:------>


n heroes fight against each other in the Arena. Initially, the i-th hero has level ai.

Each minute, a fight between two different heroes occurs. 
These heroes can be chosen arbitrarily 
(it's even possible that it is the same two heroes that were fighting during the last minute).

When two heroes of equal levels fight, nobody wins the fight. When two heroes of different levels fight, 
the one with the higher level wins, and his level increases by 1.

The winner of the tournament is the first hero that wins in at least 100000 fights 
(note that it's possible that the tournament lasts forever if no hero wins this 
number of fights, then there is no winner). 
A possible winner is a hero such that there exists a sequence of 
fights that this hero becomes the winner of the tournament.

Calculate the number of possible winners among n heroes.

Input
The first line contains one integer t (1=t=500) — the number of test cases.

Each test case consists of two lines. The first line contains one integer n (2=n=100) —
the number of heroes. The second line contains n integers a1,a2,…,an (1=ai=100), 
where ai is the initial level of the i-th hero.

Output
For each test case, print one integer — the number of possible winners among the given n heroes.

Example
input
3
3
3 2 2
2
5 5
4
1 3 3 7
output
1
0
3

//PROBLEM 2:----->

You are given the array a consisting of n positive (greater than zero) integers.

In one move, you can choose two indices i and j (i?j) 
such that the absolute difference between ai and aj is no more than one (|ai-aj|=1) 
and remove the smallest of these two elements. 
If two elements are equal, you can remove any of them (but exactly one).

Your task is to find if it is possible to obtain the array consisting of only one 
element using several (possibly, zero) such moves or not.

You have to answer t independent test cases.

Input
The first line of the input contains one integer t (1=t=1000) — 
the number of test cases. Then t test cases follow.

The first line of the test case contains one integer n (1=n=50) — 
the length of a. 
The second line of the test case contains n integers a1,a2,…,an (1=ai=100), 
where ai is the i-th element of a.

Output
For each test case, print the answer: 
"YES" if it is possible to obtain the array consisting of only one element using 
several (possibly, zero) moves described in the problem statement, or "NO" otherwise.

INPUT 

5
3
1 2 2
4
5 5 5 5
3
1 2 4
4
1 3 4 4
1
100

OUTPUT
YES
YES
NO
NO
YES

//PROBLEM 3------>

The Saratov State University Olympiad Programmers Training Center (SSU OPTC) 
has n students. For each student you know the number of times he/she has 
participated in the ACM ICPC world programming championship. According to the ACM ICPC rules,
each person can participate in the world championship at most 5 times.

The head of the SSU OPTC is recently gathering teams to
participate in the world championship. Each team must consist 
of exactly three people, at that, any person cannot be a member of two or more teams. 
What maximum number of teams can the head make if he wants each team to participate 
in the world championship with the same members at least k times?

Input
The first line contains two integers, n and k 
The next line contains n integers: y1, y2 , y3 , ..... , yn.
where yi shows the number of times the i-th person participated in the ACM ICPC world championship.

Output
Print a single number — the answer to the problem.

INPUT 
5 2
0 4 5 1 0

OUTPUT 
1

In the sample only one team could be made: the first, the fourth and the fifth participants.
*/

