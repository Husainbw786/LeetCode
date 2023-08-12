# Write your MySQL query statement below

SELECT s.user_id, ROUND(SUM(if(c.action = 'confirmed',1,0))/COUNT(s.user_id),2) as confirmation_rate from signups s LEFT join confirmations c on s.user_id = c.user_id group by s.user_id


