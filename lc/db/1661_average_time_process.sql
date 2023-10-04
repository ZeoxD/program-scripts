# Write your MySQL query statement below

SELECT st.machine_id, ROUND((end - start), 3) AS "processing_time" FROM 
(SELECT machine_id, AVG(timestamp) AS "start" FROM Activity 
WHERE activity_type = "start"
GROUP BY machine_id) st
JOIN 
(SELECT machine_id, AVG(timestamp) AS "end" FROM Activity
WHERE activity_type ="end" 
GROUP BY machine_id) et
ON st.machine_id = et.machine_id


