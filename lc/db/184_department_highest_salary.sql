# Write your MySQL query statement below

SELECT Department.name AS Department, Employee.name AS Employee, salary AS Salary 
FROM Employee JOIN Department 
ON Employee.departmentId = Department.id 
WHERE (salary, departmentId) #using parantheses makes it primary key
IN (SELECT MAX(salary), departmentId FROM Employee 
GROUP BY departmentId)
