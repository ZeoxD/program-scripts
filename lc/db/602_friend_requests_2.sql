# Write your MySQL query statement below

SELECT rid AS id, SUM(num) AS num FROM
(SELECT DISTINCT requester_id AS rid, COUNT(requester_id) AS num FROM RequestAccepted
GROUP BY requester_id
UNION ALL
SELECT DISTINCT accepter_id AS aid, COUNT(accepter_id) FROM RequestAccepted
GROUP BY accepter_id) AS temp
GROUP BY rid
ORDER BY num DESC
LIMIT 1
