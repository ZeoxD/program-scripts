# Write your MySQL query statement below

SELECT e1.name AS Employee 
from Employee AS e1 
JOIN Employee AS e2 
ON e1.managerId = e2.id
WHERE e1.salary > e2.salary