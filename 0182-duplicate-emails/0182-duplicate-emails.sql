# Write your MySQL query statement below

SELECT email from Person group by email having COUNT(email) > 1