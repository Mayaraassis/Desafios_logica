SELECT categories.name, sum(products.amount)
from categories, products
where products.id_categories = categories.id
GROUP by categories.name;
