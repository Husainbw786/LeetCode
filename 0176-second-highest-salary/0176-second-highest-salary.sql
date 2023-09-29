# Write your MySQL query statement below

#SELECT salary as SecondHighestSalary from Employee order by salary DESC LIMIT 1 OFFSET 1

SELECT max(salary) as SecondHighestSalary from Employee where salary not in (SELECT max(salary) from Employee) 