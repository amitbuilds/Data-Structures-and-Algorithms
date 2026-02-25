CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    DECLARE offset_val INT;

        SET offset_val = N - 1;
  RETURN (
      # Write your MySQL query statement below.
    -- select salary from Employee where if(n==0) else n--;4
    -- select distinct salary 
    -- from Employee 
    -- order by salary desc 
    -- limit 1 offest N-1;

    SELECT DISTINCT salary
      FROM Employee
      ORDER BY salary DESC
     LIMIT offset_val, 1
   
      

  );
END