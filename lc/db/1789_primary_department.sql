# Write your MySQL query statement below

SELECT e.employee_id, e.department_id FROM Employee e JOIN
(SELECT employee_id, COUNT(employee_id) AS 'count' FROM Employee 
GROUP BY employee_id) ct
ON e.employee_id = ct.employee_id
WHERE count = 1 OR (count >= 1 AND primary_flag = 'Y')

