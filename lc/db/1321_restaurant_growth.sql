# Write your MySQL query statement below

SELECT a.visited_on, SUM(b.day_sum) AS amount,
ROUND(SUM(b.day_sum)/7, 2) AS average_amount
FROM
    (SELECT visited_on, SUM(amount) AS day_sum FROM Customer GROUP BY visited_on) AS a,
    (SELECT visited_on, SUM(amount) AS day_sum FROM Customer GROUP BY visited_on) AS b
WHERE DATEDIFF(a.visited_on, b.visited_on) BETWEEN 0 AND 6
GROUP BY a.visited_on
HAVING COUNT(b.visited_on) = 7
