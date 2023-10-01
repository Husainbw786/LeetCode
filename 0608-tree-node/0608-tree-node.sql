# Write your MySQL query statement below

SELECT id, case 
                when p_id is NULL then 'Root'
                when id not in(SELECT distinct P_id from Tree where p_id is NOT NULL) Then 'Leaf'
                else 'Inner' end
            as type from Tree 