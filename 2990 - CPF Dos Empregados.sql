SELECT e.cpf, e.enome, d.dnome
FROM empregados e
JOIN departamentos d ON e.dnumero = d.dnumero
LEFT JOIN trabalha t ON e.cpf = t.cpf_emp
LEFT JOIN projetos p ON t.pnumero = p.pnumero
WHERE p.pnumero IS NULL
ORDER BY e.cpf;
