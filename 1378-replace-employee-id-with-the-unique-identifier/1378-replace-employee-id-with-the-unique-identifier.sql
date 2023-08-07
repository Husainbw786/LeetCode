# Write your MySQL query statement below
SELECT e2.unique_id, e1.name from Employees e1 LEFT join EmployeeUNI e2 on e1.id = e2.id