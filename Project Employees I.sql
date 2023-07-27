select project_id, round(avg(Employee.experience_years),2) 'average_years'
from Project 
inner join Employee using(employee_id)
group by project_id
