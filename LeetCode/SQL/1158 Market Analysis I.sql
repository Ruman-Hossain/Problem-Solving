# Write your MySQL query statement below
SELECT 
    users.user_id as buyer_id, users.join_date, count(orders.order_id) as 'orders_in_2019'
FROM 
    users
LEFT JOIN 
    Orders
ON 
    orders.buyer_id=users.user_id AND YEAR(order_date)='2019'
GROUP BY 
    users.user_id