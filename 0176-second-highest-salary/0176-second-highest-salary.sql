-- Write your PostgreSQL query statement below
-- select salary as SecondHighestSalary from (
--     delete from Employee where salary = max(salary) from Employee(
--     select distinct salary from Employee order by salary desc)
-- ) limit 1;

-- select salary as SecondHighestSalary 
-- from (
--     select distinct salary from Employee order by salary desc 
-- ) as temp limit 1 offset 1;

select (
    select distinct salary 
    from Employee
    order by salary desc
    limit 1
    offset 1
) as secondhighestsalary;