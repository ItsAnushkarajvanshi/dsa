# Write your MySQL query statement below
Select 
    score,
    DENSE_RANK() OVER(ORDER BY SCORE DESC) AS 'rank'
FROM Scores;