​
Select e.employee_id
from Employees e
left join Salaries s
ON e.employee_id = s.employee_id
where s.salary is null
UNION
select s.employee_id
from Salaries s
left join Employees e
ON s.employee_id = e.employee_id
where e.name is null
order by employee_id