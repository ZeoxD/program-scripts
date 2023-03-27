# Write your MySQL query statement below

SELECT class FROM 
(SELECT class, COUNT(DISTINCT student) AS c FROM Courses GROUP BY class) AS temp 
WHERE temp.c >= 5
