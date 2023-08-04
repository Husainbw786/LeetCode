# Write your MySQL query statement below

SELECT (SELECT num from MyNumbers group by num having COUNT(num) = 1 order by num DESC limit 1) as num
