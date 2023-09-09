# Write your MySQL query statement below

SELECT st.student_id, student_name, su.subject_name, 
COUNT(ex.subject_name) AS "attended_exams"
FROM Students st JOIN Subjects su 
LEFT JOIN Examinations ex
ON st.student_id = ex.student_id AND su.subject_name = ex.subject_name
GROUP BY student_id, subject_name
ORDER BY student_id
