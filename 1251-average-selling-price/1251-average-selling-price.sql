# Write your MySQL query statement below

SELECT p.product_id, ROUND(SUM(u.units*p.price)/SUM(u.units),2) as average_price from Prices p LEFT join UnitsSold u on p.product_id = u.product_id where purchase_date BETWEEN p.start_date and p.end_date group by p.product_id  