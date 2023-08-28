# Write your MySQL query statement below

SELECT project_id,ROUND(SUM(experience_years)/COUNT(name),2) as average_years from project p LEFT join employee e on p.employee_id = e.employee_id group by p.project_id