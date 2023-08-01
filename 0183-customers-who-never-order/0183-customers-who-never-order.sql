# Write your MySQL query statement below


select c.name as Customers from Customers c Left join orders o on c.id = o.customerId where o.customerId is NULL