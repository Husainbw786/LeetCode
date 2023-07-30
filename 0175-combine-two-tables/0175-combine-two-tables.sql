# Write your MySQL query statement below

SELECT firstname, lastname, city, state from person LEFT join address on  person.personId  = address.personId 
