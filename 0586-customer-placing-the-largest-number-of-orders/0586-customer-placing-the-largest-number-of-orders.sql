# Write your MySQL query statement below

SELECT customer_number from Orders group by customer_number order by COUNT(customer_number) DESC LIMIT 1