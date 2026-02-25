# Write your MySQL query statement below
-- select user_id and follower_id as followers_count from Folllowers where
SELECT 
    user_id,
    COUNT(follower_id) AS followers_count
FROM Followers
GROUP BY user_id
ORDER BY user_id ASC;