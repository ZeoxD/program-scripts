# Write your MySQL query statement below

SELECT d.name AS 'Department', e.name AS 'Employee', salary AS 'Salary'
FROM (SELECT departmentId, name, salary, 
DENSE_RANK() OVER(PARTITION BY departmentId ORDER BY salary DESC) as 'rank' 
FROM Employee) e
JOIN Department d
ON e.departmentId = d.id
WHERE e.rank <= 3
