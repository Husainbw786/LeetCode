# Write your MySQL query statement below
SELECT ROUND((SUM(case when order_date = customer_pref_delivery_date then 1 else 0 end)/COUNT(customer_pref_delivery_date))*100,2) as immediate_percentage from Delivery 
