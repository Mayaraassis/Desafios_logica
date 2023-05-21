SELECT  products.name, categories.name from products INNER join categories ON
products.id_categories = categories.id WHERE products.amount > 100 and categories. id in (1,2,3,6,9)
ORDER by categories.id ASC
