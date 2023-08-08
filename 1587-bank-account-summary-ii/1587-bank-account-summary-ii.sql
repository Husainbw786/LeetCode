# Write your MySQL query statement below

SELECT name, SUM(t.amount) as balance from Users u LEFT join Transactions t on u.account = t.account group by t.account having SUM(t.amount) > 10000 