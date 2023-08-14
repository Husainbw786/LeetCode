# Write your MySQL query statement below

SELECT e1.name as employee from Employee e1 LEFT JOIN employee e2 on e1.managerId = e2.id where e1.salary > e2.salary 