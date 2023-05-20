select customers.name, orders.id from customers INNER join orders 
on customers.id = orders.id_customers WHERE orders.orders_date >= '2016-01-01' AND
orders.orders_date <= '2016-06-30'
