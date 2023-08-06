# Write your MySQL query statement below

SELECT p.product_id, ROUND(SUM(units*price)/SUM(units),2) as average_price from prices p inner join UnitsSold u on p.product_id = u.Product_id where u.purchase_date between p.start_date and p.end_date group by p.product_id