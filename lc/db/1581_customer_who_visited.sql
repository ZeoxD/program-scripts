# Write your MySQL query statement below

SELECT v.customer_id AS "customer_id", COUNT(COALESCE(t.visit_id, 1)) AS "count_no_trans"
FROM Visits v LEFT JOIN Transactions t
ON v.visit_id = t.visit_id 
WHERE t.visit_id IS null
GROUP BY customer_id


