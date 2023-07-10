# Write your MySQL query statement below

SELECT (CASE
            WHEN MOD(id, 2) != 0 AND value != id THEN id + 1
            WHEN MOD(id, 2) != 0 AND value = id THEN id 
            ELSE id - 1
        END) AS id, student 
FROM Seat CROSS JOIN
(SELECT COUNT(*) AS "value" FROM Seat) as seat_value
ORDER BY id
