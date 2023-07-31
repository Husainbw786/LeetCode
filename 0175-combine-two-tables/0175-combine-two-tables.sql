# Write your MySQL query statement below


SELECT P.firstName, P.lastName, A.city, A.state 
from person P Left join Address A on P.personId = A.personId  