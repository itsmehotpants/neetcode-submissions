SELECT c.customer_id, c.customer_name
FROM customers c
JOIN orders o
ON c.customer_id = o.customer_id
GROUP BY c.customer_id, c.customer_name
having count(*) filter (where product_name='A')>0
and count(*) filter (where product_name='B')>0
and count(*) filter (where product_name='C')=0
ORDER BY c.customer_name;