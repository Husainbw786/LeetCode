# Write your MySQL query statement below

SELECT query_name,
ROUND(SUM(rating/position)/COUNT(rating),2) as quality,
ROUND((COUNT(case when rating < 3 then 1 end)/COUNT(rating))*100,2) as poor_query_percentage
from queries group by query_name 
