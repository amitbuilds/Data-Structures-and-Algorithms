# Write your MySQL query statement below
-- select name from Employee where Employee.managerId.salary < Empluyee.salary

select e.name as Employee
from Employee e
join Employee m
on e.managerId = m.id
where e.salary > m.salary