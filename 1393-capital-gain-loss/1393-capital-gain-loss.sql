# Write your MySQL query statement below

SELECT stock_name, SUM(case when operation = 'sell' then price else 0 end) - SUM(case when operation = 'buy' then price else 0 end) as capital_gain_loss from stocks group by stock_name