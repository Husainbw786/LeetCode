SELECT (
    SELECT DISTINCT Salary
    FROM Employee
    WHERE Salary IS NOT NULL
    ORDER BY Salary DESC
    LIMIT 1 OFFSET 1
) AS SecondHighestSalary;
