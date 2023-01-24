# Write your MySQL query statement below
SELECT 
    Sales.product_id, Product.product_name
FROM Sales
LEFT JOIN Product ON 
    Sales.product_id = Product.product_id
GROUP BY 
    Sales.product_id
HAVING MIN(sale_date) >= CAST('2019-01-01' AS DATE) AND
       MAX(sale_date) <= CAST('2019-03-31' AS DATE)