# Write your MySQL query statement below
SELECT e.employee_id from employees e LEFT join salaries s ON e.employee_id = s.employee_id where s.salary is null 
UNION
SELECT s.employee_id from salaries s LEFT join employees e ON s.employee_id = e.employee_id where e.name is null
order by employee_id