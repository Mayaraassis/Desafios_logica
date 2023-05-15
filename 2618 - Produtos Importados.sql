select prod.name, prov.name, cat.name FROM products as prod INNER JOIN providers prov
on prod.id_providers = prov.id INNER join categories cat on prod.id_categories = cat.id
WHERE cat.name LIKE 'Imported%' AND prov.name LIKE 'Sansul SA'
