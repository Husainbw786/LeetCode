# Write your MySQL query statement below

SELECT w1.id from weather w1 inner JOIN weather w2 on w1.recordDate = w2.recordDate + INTERVAL 1 DAY where w1.temperature > w2.temperature 



