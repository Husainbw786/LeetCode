# Write your MySQL query statement below

SELECT name, IFNULL(SUM(distance),0) as travelled_distance
from Users u 
LEFT join Rides r on u.id = r.user_id 
group by r.user_id order by travelled_distance DESC, name ASC



