# Write your MySQL query statement below
select email AS EMAIL from (
    select email, count(email) as email_count from Person group by email) as frequency
    where email_count>1;