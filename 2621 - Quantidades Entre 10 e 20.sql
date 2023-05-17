SELECT prod.name FROM products as prod, providers as prov WHERE 
prod.id_providers = prov.id AND
 amount BETWEEN 10 AND 20 AND prov.name LIKE 'P%';
