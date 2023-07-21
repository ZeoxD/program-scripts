# Write your MySQL query statement below

SELECT su.user_id, ROUND( COUNT(IF(action = "confirmed", 1, null)) / COUNT(COALESCE(action, 0)), 2) AS "confirmation_rate"
FROM Signups AS su LEFT JOIN Confirmations AS cf
ON su.user_id = cf.user_id
GROUP BY su.user_id
