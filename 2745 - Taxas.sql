SELECT nome_da_pessoa, ROUND(renda * 0.1, 2) AS valor_a_pagar
FROM tabela_de_pessoas
WHERE renda > 3000;
