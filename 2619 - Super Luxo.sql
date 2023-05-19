select prod.name, prov.name, prod.price from products prod inner join providers prov 
on prod.id_providers = prov.id INNER JOIN categories cat on prod.id_categories = cat.id
WHERE prod.price > 1000 and cat.name like 'Super Luxury%'
