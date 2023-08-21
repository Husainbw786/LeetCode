# Write your MySQL query statement below

SELECT distinct p.product_id, p.product_name from Sales s INNER join Product p on p.product_id = s.product_id where s.product_id not in(SELECT product_id from  Sales where sale_date NOT BETWEEN '2019-01-01' AND '2019-03-31' )






