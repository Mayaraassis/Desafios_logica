SELECT name, 
  CASE 
    WHEN type = 'A' THEN 20.0
    WHEN type = 'B' THEN 70.0
    WHEN type = 'C' THEN 530.5
  END AS price
FROM products
ORDER BY 
  CASE 
    WHEN type = 'A' THEN 1
    WHEN type = 'B' THEN 2
    WHEN type = 'C' THEN 3
  END,
  id DESC;
