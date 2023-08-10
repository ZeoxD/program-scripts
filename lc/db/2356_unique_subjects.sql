# Write your MySQL query statement below

SELECT teacher_id, COUNT(teacher_id) AS "cnt" FROM
(SELECT * FROM Teacher 
GROUP BY teacher_id, subject_id) tmpTable
GROUP BY teacher_id
