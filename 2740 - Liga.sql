SELECT CONCAT('Podium: ', team) AS name 
FROM league WHERE position <= 3 
UNION ALL 
SELECT CONCAT('Demoted: ', team) AS name
from league
WHERE position >= 14
