# Write your MySQL query statement below

SELECT u.user_id as buyer_id ,u.join_date, COUNT(order_id) as orders_in_2019 
from Users u LEFT join Orders o on u.user_id = o.buyer_id 
and  order_date >= '2019-01-01' and order_date <= '2019-12-31' group by u.user_id



