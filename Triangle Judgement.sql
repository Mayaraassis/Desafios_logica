SELECT x,y,z, CASE WHEN x+y>z AND x+z>y AND y+z>x then 'Yes' ELSE 'No' end as triangle from triangle;
