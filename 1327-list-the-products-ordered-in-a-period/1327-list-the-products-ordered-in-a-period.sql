# Write your MySQL query statement below

SELECT p.product_name,SUM(o.unit) as unit from Products p LEFT JOIN Orders o on p.product_id = o.product_id 
 where o.order_date >= '2020-02-01' and o.order_date <= '2020-02-29' group by o.product_id having unit >= 100 
