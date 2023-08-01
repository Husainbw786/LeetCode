# Write your MySQL query statement below

SELECT DISTINCT(email) as email from person group by email having COUNT(email) > 1



