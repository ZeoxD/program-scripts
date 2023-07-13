# Write your MySQL query statement below

(SELECT u.name AS "results"
FROM MovieRating mr JOIN Users u
ON mr.user_id = u.user_id 
GROUP BY mr.user_id
ORDER BY COUNT(mr.user_id) DESC, u.name 
LIMIT 1)

UNION ALL

(SELECT title AS "results"
FROM MovieRating JOIN Movies 
ON MovieRating.movie_id = Movies.movie_id
WHERE YEAR(created_at) = '2020' AND MONTH(created_at) = '02'
GROUP BY MovieRating.movie_id
ORDER BY AVG(rating) DESC, title
LIMIT 1)

