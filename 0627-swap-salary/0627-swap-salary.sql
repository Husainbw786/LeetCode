# Write your MySQL query statement below

UPDATE salary 
SET sex = case when sex = 'f' then 'm'
when sex = 'm' then 'f' END 