# Write your MySQL query statement below

SELECT s.user_id, ROUND(COUNT(if(c.action = 'confirmed',1,null))/COUNT(s.user_id),2) as confirmation_rate from signups s LEFT join confirmations c on s.user_id = c.user_id group by s.user_id


