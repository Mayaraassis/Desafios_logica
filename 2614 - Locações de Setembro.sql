SELECT customers.name, 
rentals.rentals_date FROM customers, rentals
WHERE customers.id = rentals.id_customers AND
rentals.rentals_date >= '2016-09-01'
AND rentals.rentals_date <= '2016-09-30';
