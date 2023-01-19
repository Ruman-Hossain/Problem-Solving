# Write your MySQL query statement below
SELECT customer_id,count(v.visit_id) AS count_no_trans FROM Visits AS v 
    WHERE v.visit_id NOT IN(
        SELECT t.visit_id FROM Transactions t
    ) GROUP BY customer_id
ORDER BY count_no_trans DESC