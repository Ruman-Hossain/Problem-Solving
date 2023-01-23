# Write your MySQL query statement below
SELECT 
    Users.name, ifnull(sum(Rides.distance),0) as travelled_distance 
FROM 
    Users LEFT JOIN Rides
ON 
    users.id = Rides.user_id
GROUP BY
    Users.id
ORDER BY
    travelled_distance DESC, Users.name ASC;