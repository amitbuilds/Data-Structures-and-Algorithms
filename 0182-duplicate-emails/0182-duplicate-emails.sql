select email from
(select email ,count(id) as id from Person group by email)
where id > 1;