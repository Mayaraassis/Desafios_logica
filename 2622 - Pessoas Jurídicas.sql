select c.name from customers as c inner join legal_person legal on
legal.id_customers = c.id
