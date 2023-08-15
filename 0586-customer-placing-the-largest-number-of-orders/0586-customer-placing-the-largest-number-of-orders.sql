# Write your MySQL query statement below

SELECT customer_number from orders group by customer_number order by COUNT(customer_number) DESC limit 1