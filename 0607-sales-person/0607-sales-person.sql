# Write your MySQL query statement below


SELECT SalesPerson.name from SalesPerson where sales_id not in
(
   SELECT orders.sales_id from Orders where orders.com_id in
    (
     SELECT Company.com_id from Company where name = 'RED'
    )
)


