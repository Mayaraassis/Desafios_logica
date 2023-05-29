SELECT name, ROUND((math * 2 + specific * 3 + project_plan * 5) / 10,2) AS avg
FROM candidate INNER join score on candidate.id = score.candidate_id
ORDER BY Avg DESC;
