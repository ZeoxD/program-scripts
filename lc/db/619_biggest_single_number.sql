# Write your MySQL query statement below

SELECT MAX(num) num FROM
(SELECT num, COUNT(num) as c
FROM MyNumbers
GROUP BY num) as temp
WHERE c = 1
