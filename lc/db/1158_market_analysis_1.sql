# Write your MySQL query statement below

SELECT user_id AS buyer_id, join_date, COALESCE(order_count, 0) AS orders_in_2019 
FROM Users LEFT JOIN
(SELECT buyer_id, COUNT(*) AS "order_count" FROM Orders
WHERE YEAR(order_date) = '2019'
GROUP BY buyer_id) AS tmp
ON Users.user_id = tmp.buyer_id
