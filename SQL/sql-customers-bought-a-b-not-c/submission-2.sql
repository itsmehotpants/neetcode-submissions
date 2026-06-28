select customer_id, customer_name from customers where customer_id in (
SELECT customer_id
FROM orders
GROUP BY customer_id
HAVING 
    SUM(CASE WHEN product_name = 'A' THEN 1 ELSE 0 END) > 0
    AND SUM(CASE WHEN product_name = 'B' THEN 1 ELSE 0 END) > 0
    AND SUM(CASE WHEN product_name = 'C' THEN 1 ELSE 0 END) = 0)
order by customer_name