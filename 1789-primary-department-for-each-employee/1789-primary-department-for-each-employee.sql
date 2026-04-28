# partition - to keep all rows and then filter out


SELECT employee_id, department_id
FROM Employee
WHERE primary_flag = 'Y'

UNION

SELECT employee_id, department_id
FROM (
    SELECT *, COUNT(*) OVER (PARTITION BY employee_id) as dept_count
    FROM Employee
) AS cte
WHERE dept_count = 1;