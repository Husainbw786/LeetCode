# Write your MySQL query statement below

SELECT machine_id, ROUND((SUM(case when activity_type = 'end' then timestamp else 0 end) - SUM(case when activity_type = 'start' then timestamp else 0 end))/COUNT(distinct(process_id)),3) as processing_time from activity group by machine_id