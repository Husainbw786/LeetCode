
SELECT v.customer_id, COUNT(customer_id) as count_no_trans from Visits v LEFT join transactions t on v.visit_id = t.visit_id where transaction_id is NULL group by v.customer_id


