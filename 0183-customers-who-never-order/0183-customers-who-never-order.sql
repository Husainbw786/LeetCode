# Write your MySQL query statement below

SELECT name as customers from customers c LEFT join orders o on c.id = o.customerId where o.customerId is NULL  