https://leetcode.com/problems/find-customer-referee/submissions/1922392755
SELECT name
FROM Customer
WHERE referee_id IS NULL
   OR referee_id <> 2;
