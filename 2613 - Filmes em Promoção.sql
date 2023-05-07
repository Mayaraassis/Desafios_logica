SELECT mov.id, mov.name
FROM movies mov inner join prices pc ON
mov.id_prices = pc.id
WHERE pc.value < 2.00
