# Write your MySQL query statement below

SELECT s1.score,(SELECT COUNT(DISTINCT(score)) from scores s2 where  s2.score >= s1.score )
as 'Rank' from scores s1 order by s1.score DESC


