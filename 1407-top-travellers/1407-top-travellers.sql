# Write your MySQL query statement below

SELECT name,
case when distance is not NULL then SUM(distance) 
when distance is NULL then 0 end as travelled_distance
from Users u 
LEFT join Rides r on u.id = r.user_id 
group by r.user_id order by travelled_distance DESC, name ASC



