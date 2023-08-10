select employee_id, department_id
FROM Employee
where primary_flag="Y"
UNION
select employee_id, department_id
FROM Employee
GROUP BY employee_id
HAVING count(department_id)=1;