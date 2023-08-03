/*Master theorem: Gives the time complexity for the recurrence relation:
T(n) = aT(n/b) + theta(n^c); theta(n^c) = f(n)
Formulas:
1. c<Logba then T(n) = theta(n^logb-a)
2. c = logba then T(n) = theta(n^c. log-n)
3. c>logb--a then T(n) = theta(f(n)) */