# Write your MySQL query statement below

SELECT firstName,lastName,city,state from person p LEFT join address a on p.personId = a.personId 