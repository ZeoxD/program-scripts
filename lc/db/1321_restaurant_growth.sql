# Write your MySQL query statement below

SELECT a.visited_on, ROUND(SUM(b.day_sum), 2) AS 'amount', 
ROUND(SUM(b.day_sum)/ 7, 2) AS 'average_amount'
FROM
    (SELECT visited_on, SUM(amount) AS day_sum FROM Customer GROUP BY visited_on) AS a,
    (SELECT visited_on, SUM(amount) AS day_sum FROM Customer GROUP BY visited_on) AS b
WHERE DATEDIFF(a.visited_on, b.visited_on) BETWEEN 0 AND 6
AND a.visited_on >= (SELECT min(visited_on) FROM Customer) + 6
GROUP BY a.visited_on
ORDER BY a.visited_on
