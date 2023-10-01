SELECT id ,case
WHEN P_id is NULL then 'Root'
WHEN id NOT IN (SELECT DISTINCT P_id FROM Tree WHERE P_id IS NOT NULL) THEN 'Leaf'
else 'Inner' end
as type from Tree