# Write your MySQL query statement below

SELECT B.stock_name, sell - buy AS capital_gain_loss FROM 
(SELECT stock_name, SUM(price) AS buy 
FROM Stocks
WHERE operation = "Buy"
GROUP BY stock_name) AS B JOIN
(SELECT stock_name, SUM(price) AS sell
FROM Stocks
WHERE operation = "Sell"
GROUP BY stock_name) AS S
ON B.stock_name = S.stock_name

